/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:48:44 by marlean           #+#    #+#             */
/*   Updated: 2021/11/23 20:09:28 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	ft_check(const char *format, va_list ap)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (*format == 'u')
		count += ft_unsigned(va_arg(ap, unsigned int));
	else if (*format == '%')
		count += ft_putchar('%');
	else if (*format == 'p')
		count += ft_point_hex(va_arg(ap, unsigned long int));
	else if (*format == 'x')
		count += ft_hex(va_arg(ap, unsigned int), 1);
	else if (*format == 'X')
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
			count += ft_check(format, ap);
			format++;
		}
		else
			count += ft_putchar(*format++);
	}
	va_end(ap);
	return (count);
}
