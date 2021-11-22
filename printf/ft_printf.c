/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:48:44 by marlean           #+#    #+#             */
/*   Updated: 2021/11/22 16:27:43 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap; //указатель в стеке аргументов (argument pointer)

	count = 0;
	va_start(ap, format); //инициализация
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += ft_putchar(va_arg(ap, int));
			else if (*format == 'd' || *format == 'i')
				count += ft_putnbr(va_arg(ap, int));
			else if (*format == 's')
				count += ft_putstr(va_arg(ap, char *));
			else if (*format == '%')
				count += ft_putchar('%');
			format++;
		}
		else
			count += ft_putchar(*format++);
	}
	va_end(ap); //очистка
	return (count);
}

int	main(void)
{
	char c = 'v';
	char *str = "Welcome to NZ";
	int num =-214;
	
	int my_f = ft_printf("MY FUNCT: char |%c| string |%s| int |%i| persent |%%|\n", c, str, num);
	int orig = printf("ORIGINAL: char |%c| string |%s| int |%i| persent |%%|\n", c, str, num);
	printf("my f = %d\norig = %d", my_f, orig);

	return (0);
}