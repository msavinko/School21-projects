/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pslist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:25:56 by marlean           #+#    #+#             */
/*   Updated: 2022/02/03 18:38:31 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_pslist *stack, char c)
{
	int	i;

	i = 0;
	printf("\n----Stack %c----\n", c);
	while (stack != NULL)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

void	ft_pslstadd_back(t_pslist **lst, t_pslist *new)
{
	t_pslist	*elem;

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

t_pslist	*ft_ps_one_before_lstlast(t_pslist *lst)
{
	while (lst)
	{
		if (lst->next->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

int	ft_pslstsize(t_pslist *lst)
{
	int	i;

	i = 0;
	if (lst)
	{
		while (lst)
		{
			i++;
			lst = lst->next;
		}
	}
	return (i);
}

t_pslist	*ft_create_list(char **array)
{
	t_pslist	*stack_a;
	t_pslist	*current;
	int			i;

	i = 1;
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
	return (stack_a);
}

void	ft_sort_three(t_pslist **stack)
{
	t_pslist	*current;

	current = *stack;
	if (current->value > current->next->value)
	{
		if (current->next->value < current->next->next->value)
		{
			ft_rotate(stack, 1, 1);
			return ;
		}
		ft_swap(stack, 1, 1);
		current = (*stack)->next;
		if (current->value > current->next->value)
			ft_rev_rotate(stack, 1, 1);
	}
	else
	{
		ft_rev_rotate(stack, 1, 1);
		current = (*stack)->next;
		if (current->value > current->next->value)
			ft_swap(stack, 1, 1);
	}
}

void	ft_push_swap(char **array)
{
	t_pslist	*stack_a;
	t_pslist	*stack_b;

	stack_a = ft_create_list(array);
	stack_b = NULL;

	ft_print_stack(stack_a, 'A');
	ft_print_stack(stack_b, 'B');
	printf("=======================");

	ft_sort_three(&stack_a);

	ft_print_stack(stack_a, 'A');
	ft_print_stack(stack_b, 'B');
	printf("=======================");
}
