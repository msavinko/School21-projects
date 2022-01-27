/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:27:39 by marlean           #+#    #+#             */
/*   Updated: 2022/01/27 16:13:20 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list	*stack_a;
//	t_list	*stack_b;
	int		i;

	i = 1;
	stack_a = NULL;
	if (argc > 2)
	{
		while (argv[i])
		{
			int a = ft_atoi(argv[1]);
			ft_putnbr_fd(a, 1);
			ft_lstlast(stack_a);
		}
		
		
		
	}
	return (0);
}