/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:17:27 by marlean           #+#    #+#             */
/*   Updated: 2022/01/28 15:13:51 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isint(char *str)
{
	long long int	num;
	int				i;
	
	num = 0;
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			num = num * 10 + (str[i++] - '0');
		else
			return (0);
	}
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	else
		return (1);
}

void	ft_check_int(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (ft_isint(array[i]))
			i++;
		else
			ft_error(1);
	}
}

void	ft_check_repeat(char **array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		j = i + 1;
		while (array[j])
		{
			if (!ft_strncmp(array[i], array[j], 11))
				ft_error(1);
			else
				j++;
		}
		i++;
	}
}
