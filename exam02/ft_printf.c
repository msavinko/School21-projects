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

int	ft_putstr(char *str, int wide)
{
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
	while (*str)
		write(1, str++, 1);
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

int ft_putnbr(int num)
{
	int f_minusd = 0;
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
	else
		ft_recurs_nbr(num);
	if (f_minusd)
		return(1 + ft_numlen(num, 10));
	return (ft_numlen(num, 10));
}
int ft_puthex(int hex)
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
		ft_puthex(hex / 16);
		ft_puthex(hex % 16);
	}
	return (ft_numlen(hex, 16));
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	int wide = 0;

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
					wide = (wide * 10) + (*format) - '0';	
					format++;
				}
			}
			if (*format == 's')
				count += ft_putstr(va_arg(ap, char *), wide);
			if (*format == 'd')
				count += ft_putnbr(va_arg(ap, int));
			if (*format == 'x')
				count += ft_puthex(va_arg(ap, unsigned int));
			format++;
		}
		else
			count += write(1, format++, 1);
	}
	
	
	va_end(ap);
	return (count);
}

#include <stdio.h>
int main(void)
{
	int one, two;
	one = ft_printf("string: --|%11s|--\n", "welcome");
	two = printf("string: --|%11s|--\n", "welcome");
	one = ft_printf("my funct: %d\n", -23);
	two = printf("original: %d\n", -23);
	// ft_printf("%10.2s\n", "toto");
	// printf("%10.2s\n", "toto");
	// ft_printf("Magic %s is %5d\n", "number", 42);
	// printf("Magic %s is %5d\n", "number", 42);
	// int one = ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	two = printf("Hexadecimal for %d is %x\n", 42, 42);
	printf("\nmy funct: %d\noriginal: %d", one, two);
	return (0);
}