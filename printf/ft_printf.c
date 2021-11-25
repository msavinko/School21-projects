/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:48:44 by marlean           #+#    #+#             */
/*   Updated: 2021/11/25 17:36:13 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

// static void	ft_recurs_hex(unsigned long int p, int letters)
// {
// 	if (p < 16)
// 	{
// 		if (p % 16 <= 9)
// 			ft_putchar(p + 48);
// 		else
// 			ft_putchar(p + letters);
// 	}
// 	else
// 	{	
// 		ft_recurs_hex(p / 16, letters);
// 		ft_recurs_hex(p % 16, letters);
// 	}
// }

// int	ft_hex(unsigned int p, int flag)
// {
// 	if (!p)
// 	{
// 		ft_putchar('0');
// 		return (1);
// 	}
// 	if (flag == 1)
// 		ft_recurs_hex(p, 87);
// 	else if (flag == 2)
// 		ft_recurs_hex(p, 55);
// 	return (ft_nbrlen(p, 16));
// }

// int	ft_point_hex(unsigned long int p)
// {
// 	if (!p)
// 	{
// 		ft_putstr("0x0");
// 		return (3);
// 	}
// 	ft_putstr("0x");
// 	ft_recurs_hex(p, 87);
// 	return (ft_nbrlen(p, 16) + 2);
// }

// size_t	ft_strlen(const char *str)
// {
// 	size_t		i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// int	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

// int	ft_putstr(char *s)
// {
// 	if (!s)
// 	{
// 		write(1, "(null)", 6);
// 		return (6);
// 	}
// 	else
// 		write(1, s, ft_strlen(s));
// 	return (ft_strlen(s));
// }

// int	ft_nbrlen(unsigned long int nb, int dec)
// {
// 	int	count;

// 	count = 0;
// 	if (nb == 0)
// 		return (1);
// 	while (nb > 0)
// 	{
// 		nb /= dec;
// 		count++;
// 	}
// 	return (count);
// }
// static void	ft_recurs_putnbr(int nb)
// {
// 	if (nb <= 9)
// 		ft_putchar(nb + '0');
// 	else
// 	{
// 		ft_recurs_putnbr(nb / 10);
// 		ft_putchar((nb % 10) + '0');
// 	}
// }

// int	ft_putnbr(int nb)
// {
// 	int	count;

// 	count = 0;
// 	if (nb < 0)
// 	{	
// 		if (nb == -2147483648)
// 		{
// 			ft_putstr("-2147483648");
// 			return (11);
// 		}
// 		ft_putchar('-');
// 		nb *= -1;
// 		count++;
// 	}
// 	ft_recurs_putnbr(nb);
// 	count += ft_nbrlen(nb, 10);
// 	return (count);
// }

// static void	ft_recurs_u(unsigned int nb)
// {
// 	if (nb <= 9)
// 		ft_putchar(nb + '0');
// 	else
// 	{
// 		ft_unsigned(nb / 10);
// 		ft_putchar((nb % 10) + '0');
// 	}
// }

// int	ft_unsigned(unsigned int nb)
// {
// 	ft_recurs_u(nb);
// 	return (ft_nbrlen(nb, 10));
// }

int	ft_check(const char **format, va_list ap)
{
	int				count;
	unsigned int	x;
	int 			num;
	int				flag_plus;

	x = 0;
	count = 0;
	num = 0;
	flag_plus = 0;
	if (**format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (**format == ' ')
		(*format)++;
	else if (**format == ' ' || **format == '+')
	{
		while (**format == ' ' || **format == '+')
		{
			if (**format == '+')
				flag_plus = 1;
			(*format)++;
		}
		if (**format == 'd' || **format == 'i')
		{
			num = va_arg(ap, int);
			if (flag_plus)
				if (num >= 0)
					count += ft_putchar('+');
			if (num >= 0 && !flag_plus)
				count += ft_putchar(' ');
			count += ft_putnbr(num);
		}
	}
	else if (**format == 'd' || **format == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (**format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (**format == 'u')
		count += ft_unsigned(va_arg(ap, unsigned int));
	else if (**format == '%')
		count += ft_putchar('%');
	else if (**format == 'p')
		count += ft_point_hex(va_arg(ap, unsigned long int));
	else if (**format == '#')
	{
		(*format)++;
		if (**format == 'x')
		{
			x = va_arg(ap, unsigned int);
			if (x == 0)
				count += ft_putchar('0');
			else
			{
				count += ft_putstr("0x");
				count += ft_hex(x, 1);
			}
		}
		else if (**format == 'X')
		{
			x = va_arg(ap, unsigned int);
			if (x == 0)
				count += ft_putchar('0');
			else
			{
				count += ft_putstr("0X");
				count += ft_hex(x, 2);
			}
		}
	}
	else if (**format == 'x')
		count += ft_hex(va_arg(ap, unsigned int), 1);
	else if (**format == 'X')
		count += ft_hex(va_arg(ap, unsigned int), 2);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;
	int		width;

	count = 0;
	width = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format >= '0' && *format <= '9')
			{
				while (*format >= '0' && *format <= '9')
				{
					width = width * 10 + *format - '0';
					format++;
				}
				//неправильно вычитает длину из строки. не считает символы строки.
				width--;
				count += width;
				while (width--)
					ft_putchar(' ');
			}
			count += ft_check(&format, ap);
			format++;
		}
		else
			count += ft_putchar(*format++);
	}
	va_end(ap);
	return (count);
}
// int main(void)
// {
// 	// int x = 45;
// 	// int y = -6;
// 	// unsigned int u = 9;
// 	//char	*s = "hello";
// 	int one = 0;
// 	int two = 0;

// 	one = ft_printf("M: %7s\n", "abc");
// 	two = printf("O: %7s\n", "abc");
// 	printf("one: %d\ntwo: %d", one, two);
// 	return (0);
// }
