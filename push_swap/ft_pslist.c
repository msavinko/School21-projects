/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pslist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:25:56 by marlean           #+#    #+#             */
/*   Updated: 2022/02/02 16:39:50 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_pslist *stack)
{
	int	i;

	i = 0;
	if (stack)
	{
		while (stack != NULL)
		{
			printf("%d\n", stack->value);
			stack = stack->next;
		}
		printf("\n-----\n");
	}
}

void	ft_pslstadd_back(t_pslist **lst, t_pslist *new)
{
	t_pslist *elem;

	elem = *lst;
	if (elem)
	{
		while (elem->next)
			elem = elem->next;
		elem->next = new;
	}
	else
		*lst = new;
}

t_pslist	*ft_pslstlast(t_pslist *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int	ft_pslstsize(t_pslist *lst)
// {
// 	int	i;

// 	i = 0;
// 	if (lst)
// 	{
// 		while (lst)
// 		{
// 			i++;
// 			lst = lst->next;
// 		}
// 	}
// 	return (i);
// }

void	ft_create_list(char **array)
{
	t_pslist	*stack_a;
	t_pslist	*stack_b;
	t_pslist	*current;
	int			i;

	i = 1;
	stack_b = NULL;
	stack_a = malloc(sizeof(t_pslist));
	if (!stack_a)
		ft_error(1);
	stack_a->value = ft_atoi(array[0]);
	stack_a->next = NULL;
	current = stack_a;
	while (array[i])
	{
		current = malloc(sizeof(t_pslist));
		if (!current)
			ft_error(1);
		current->value = ft_atoi(array[i++]);
		current->next = NULL;
		ft_pslstadd_back(&stack_a, current);
	}

	//ft_swap(stack_a);
	//	ft_ss(stack_a, stack_b);

	ft_push(&stack_a, &stack_b);
	ft_push(&stack_a, &stack_b);

	
	ft_print_stack(stack_a);
	ft_print_stack(stack_b);

	ft_ss(&stack_a, &stack_b);

	ft_print_stack(stack_a);
	ft_print_stack(stack_b);
}