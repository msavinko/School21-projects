/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:27:39 by marlean           #+#    #+#             */
/*   Updated: 2022/02/02 10:53:25 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	ft_print_chararr(char **array)
// {
// 	int i = 0;
// 	printf("string1\n");
// 	while (array[i])
// 		printf("%s ", array[i++]);
// }



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
		char **new_array;
		
		new_array = ft_split(argv[1], ' ');
		if (ft_array_len(new_array) == 1)
		{
			if (ft_isint(new_array[0]))
				exit(0);
			else
				ft_error(1);
		}
		else
		{
			ft_check_int(&new_array[0]);
			ft_check_repeat(&new_array[0]);
			len = ft_array_len(&new_array[0]);
			if (ft_create_int_array_and_check_sort(&new_array[0], len))
				ft_create_list(&new_array[0]);
		}
	}
	else
		return (0);
}