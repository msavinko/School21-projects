/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:26:39 by marlean           #+#    #+#             */
/*   Updated: 2021/10/20 19:27:50 by marlean          ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		flag_sign;
	int		flag_min;

	flag_sign = 0;
	flag_min = 0;
	len = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n = n + 1;
			flag_min = 1;
		}
		n *= -1;
		len = ft_intlen(n) + 1;
		flag_sign = 1;
	}
	else
		len = ft_intlen(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (flag_min)
		result[10] = '8';
	if (flag_sign)
		result[0] = '-';
	return (result);
}
