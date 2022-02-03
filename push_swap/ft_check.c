/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:17:27 by marlean           #+#    #+#             */
/*   Updated: 2022/02/03 15:57:05 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int error_code)
{
	write(2, "Error\n", 6);
	exit(error_code);
}

int	ft_array_len(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	ft_isint(char *str)
{
	long long int	num;
	int				i;

	num = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
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

int	ft_create_int_array_and_check_sort(char **array, int len)
{
	int	i;
	int	*new_array;

	i = 0;
	new_array = malloc(len * sizeof(int));
	while (array[i])
	{
		new_array[i] = ft_atoi(array[i]);
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		if (new_array[i] < new_array[i + 1])
			i++;
		else
		{
			free(new_array);
			return (1);
		}
	}
	free(new_array);
	return (0);
}

int	ft_check(char **array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		if (ft_isint(array[i]))
			i++;
		else
			ft_error(1);
	}
	i = 0;
	while (array[i])
	{
		j = i + 1;
		while (array[j])
		{
			if (!ft_strncmp(array[i], array[j++], 11))
				ft_error(1);
		}
		i++;
	}
	if (ft_create_int_array_and_check_sort(array, ft_array_len(array)))
		return (1);
	return (0);
}
