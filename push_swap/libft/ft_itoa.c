/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:26:39 by marlean           #+#    #+#             */
/*   Updated: 2022/01/27 10:25:27 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(unsigned long int num)
{
	char *str = NULL;
	unsigned long int tmp = num;
	int len = 0;

	if (num == 0)
		len++;
	while (tmp > 0)
	{
		tmp = tmp/10;
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		if ((num % 10) > 9)
			str[len-1] = (num % 10) + 'a' - 10;
		else
			str[len-1] = (num % 10) + '0';
		num = num/10;
		len--;
	}
	return (str);
}
