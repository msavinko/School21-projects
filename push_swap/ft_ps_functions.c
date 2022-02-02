/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.4(**stack)->next.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: (**stack)->next0(**stack)->next(**stack)->next/0(**stack)->next/0(**stack)->next (**stack)0:4(**stack):(**stack)->next6 by marlean           #+#    #+#             */
/*   Updated: (**stack)->next0(**stack)->next(**stack)->next/0(**stack)->next/0(**stack)->next (**stack)4:0(**stack)->next:00 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa : swap a - swap the first (**stack)->next elements at the top of stack a. Do nothing if there is only one or no elements).
// sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
// ss : sa and sb at the same time.
// pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
// pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

// ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
// rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
// rr : ra and rb at the same time.
// rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
// rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
// rrr : rra and rrb at the same time.
void	ft_swap(t_pslist **stack)
{
	t_pslist	*one;
	t_pslist	*two;

	if (!stack)
		return ;
	one = *stack;
	two = (*stack)->next;
	one->next = two->next;
	two->next = one;
	*stack = two;
}

void ft_ss(t_pslist **stack_a, t_pslist **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	ft_push(t_pslist **stack_a, t_pslist **stack_b)
{
	t_pslist	*tmp;

	if (!stack_a)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
}

void	ft_rotate(t_pslist **stack)
{
	t_pslist	*first;
	t_pslist	*last;

	if (!stack)
		return;
	first = (*stack)->next;
	last = ft_pslstlast(stack);
	last->next = stack;
	stack = last;
}