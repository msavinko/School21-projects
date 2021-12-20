#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	if (!str)
		return (0);
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str, int wide, int precision)
{
	int i = 0;
	if (!str)
		return (0);
	int count = ft_strlen(str);
	if (wide > count)
	{
		wide = wide - count;
		count += wide;
		while (wide--)
			ft_putchar(' ');
	}
	while (i < precision)
		write(1, &str[i++], 1);
	return (count);
}

int	ft_numlen(int num, int del)
{
	int count = 0;
	while (num)
	{
		count++;
		num /= del;
	}
	return (count);
}

void	ft_recurs_nbr(int num)
{
	if (num < 10)
		ft_putchar(num + '0');
	else
	{
		ft_recurs_nbr(num / 10);
		ft_putchar((num % 10) + '0');
	}
}

int ft_putnbr(int num, int wide, int precis)
{
	int f_minusd = 0;
	int count = ft_numlen(num, 10);

	if (wide > count + precis)
	{
		wide = wide - precis - count;
		precis = precis - count;
		count = count + wide + precis;	
	}
	else if (wide <= count + precis)
	{
		wide = 0;
		precis = precis - count;
		count = count + precis;
	}
	while (wide-- > 0)
		ft_putchar(' ');
	if (num < 0)
	{
		if (num == -2147483648)
		{	
			write (1, "-2147483648", 11);
			return (11);
		}
		write(1, "-", 1);
		f_minusd = 1;
		ft_recurs_nbr(num * (-1));
	}
	//////////
	//else
	ft_recurs_nbr(num);
	while (precis-- > 0)
		ft_putchar('0');


	if (f_minusd)
		return(1 + count);
	return (count);
}
void ft_rechex(int hex)
{
	if (hex < 16)
	{
		if ((hex % 16) <= 9)
			ft_putchar(hex + '0');
		else
			ft_putchar(hex + ('a' - 10));
	}
	else
	{
		ft_rechex(hex / 16);
		ft_rechex(hex % 16);
	}
}
int ft_puthex(int hex, int wide)
{
	int count = ft_numlen(hex, 16);
	if (wide > count)
	{
		wide = wide - count;
		count += wide;
		while (wide--)
			ft_putchar(' ');
	}
	ft_rechex(hex);
	return (count);
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	

	va_start(ap, format);
	while (*format)
	{
		int wide = 0;
		int precis = 0;
		if (*format == '%')
		{
			format++;
			while (*format >= '0' && *format <= '9')
			{
				wide = (wide * 10) + (*format) - '0';	
				format++;
			}
			if (*format == '.')
			{
				precis = 0;
				format++;
				while (*format >= '0' && *format <= '9')
				{
					precis = (precis * 10) + (*format) - '0';	
					format++;
				}
			}
			if (*format == 's')
				count += ft_putstr(va_arg(ap, char *), wide, precis);
			else if (*format == 'd')
				count += ft_putnbr(va_arg(ap, int), wide, precis);
			else if (*format == 'x')
				count += ft_puthex(va_arg(ap, unsigned int), wide);
			format++;
		}
		else
			count += write(1, format++, 1);
	}
	
	
	va_end(ap);
	return (count);
}