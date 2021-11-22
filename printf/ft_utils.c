/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:55:17 by marlean           #+#    #+#             */
/*   Updated: 2021/11/22 16:27:49 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
		
	else
		write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

static int ft_recurs_putnbr(int nb, int i)
{
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		//i++;
		
		ft_recurs_putnbr(nb / 10, i);
		ft_putchar((nb % 10) + '0');
		// i++;
		// printf("\nrevers_putnbr: %d and nb: %d\n", i, nb);
	}
	return (i);
}

int ft_putnbr(int nb)
{
	int i;
	
	i = 0;
	if (nb < 0)
	{	
		if (nb == -2147483648)
		{
			ft_putstr("-2147483648");
			return (11);
		}
		ft_putchar('-');
		nb *= -1;
		i++;
	}
	i += ft_recurs_putnbr(nb, i);
	printf("\nputnbr: %d\n", i);
	return (i);
}