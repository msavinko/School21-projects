/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:27:39 by marlean           #+#    #+#             */
/*   Updated: 2022/01/28 15:53:40 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// static void	ft_print_chararr(char **array)
// {
// 	int i = 0;
// 	printf("string\n");
// 	while (array[i])
// 		printf("%s ", array[i++]);
// }

static void ft_create_list(char **array)
{
	t_list	*stack_a;
	int		i;

	i = 0;
	while (array[i])
	{
		stack_a = ft_lstnew(ft_atoi(array[i]));
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = 1;
	if (argc > 2)
	{
		ft_check_int(&argv[1]);
		ft_check_repeat(&argv[1]);
		len = ft_array_len(&argv[1]);
		if (ft_create_int_array_and_check_sort(&argv[1], len))
			ft_create_list(&argv[1]);
	}
	else if (argc == 2)
	{
		if (ft_isint(argv[1]))
			exit(0);
		else
			ft_error(1);
	}
	else
		return (0);
}