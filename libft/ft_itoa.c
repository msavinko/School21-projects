/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:26:39 by marlean           #+#    #+#             */
/*   Updated: 2021/10/22 13:05:45 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_flags(int min, int num, char *result)
{
	if (min)
		result[10] = '8';
	if (num < 0)
		result[0] = '-';
	return (result);
}

int	ft_flagmin(int n)
{
	if (n == -2147483648)
		return (1);
	else
		return (0);
}

int	ft_negative(int n)
{
	if (n == -2147483648)
		n = (n + 1) * (-1);
	else
		n = n * (-1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		numcopy;

	numcopy = n;
	len = ft_intlen(n);
	if (n < 0)
	{
		n = ft_negative(n);
		len = ft_intlen(n) + 1;
	}	
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[len-- - 1] = (n % 10) + '0';
		n /= 10;
	}
	if (ft_flagmin(numcopy) || numcopy < 0)
		result = ft_flags(ft_flagmin(numcopy), numcopy, result);
	return (result);
}
