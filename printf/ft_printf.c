/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:48:44 by marlean           #+#    #+#             */
/*   Updated: 2021/11/24 20:35:59 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

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

// int	ft_nbrlen(long int nb)
// {
// 	int	count;

// 	count = 0;
// 	if (nb == 0)
// 		return (1);
// 	while (nb > 0)
// 	{
// 		nb /= 10;
// 		count++;
// 	}
// 	return (count);
// }

// int	ft_hex(unsigned long int p, int flag)
// {
// 	char	*hex;
// 	char	address[30];
// 	int		i;
// 	int		len;

// 	i = 0;
// 	if (!p)
// 		address[i++] = '0';
// 	if (flag == 1)
// 		hex = "0123456789abcdef";
// 	else if (flag == 2)
// 		hex = "0123456789ABCDEF";
// 	while (p)
// 	{
// 		address[i] = hex[p % 16];
// 		p /= 16;
// 		i++;
// 	}
// 	len = i;
// 	address[i] = '\0';
// 	while (i--)
// 		ft_putchar(address[i]);
// 	return (len);
// }

// int	ft_point_hex(unsigned long int p)
// {
// 	char	*hex;
// 	char	address[30];
// 	int		i;
// 	int		len;

// 	i = 0;
// 	if (!p)
// 		address[i++] = '0';
// 	hex = "0123456789abcdef";
// 	while (p)
// 	{
// 		address[i] = hex[p % 16];
// 		p /= 16;
// 		i++;
// 	}
// 	len = i;
// 	address[i] = '\0';
// 	ft_putstr("0x");
// 	while (i--)
// 		ft_putchar(address[i]);
// 	return (len + 2);
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
// 	count += ft_nbrlen(nb);
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
// 	return (ft_nbrlen(nb));
// }

int	ft_check(const char **format, va_list ap)
{
	int				count;
	unsigned int	x;

	x = 0;
	count = 0;
	if (**format == 'c')
		count += ft_putchar(va_arg(ap, int));
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

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
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
// 	//long int x = 455;
// 	int one = 0;
// 	int two = 0;

// 	one = ft_printf("M: %#x,\n", 0);
// 	two = printf("O: %#x,\n", 0);
// 	printf("one: %d\ntwo: %d", one, two);
// 	return (0);
// }
