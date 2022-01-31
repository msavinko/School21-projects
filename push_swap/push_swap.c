/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariasavinova <mariasavinova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:27:39 by marlean           #+#    #+#             */
/*   Updated: 2022/01/31 17:08:40 by mariasavino      ###   ########.fr       */
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

static void ft_print_stack(t_plist *stack_a)
{
	int	i;

	i = 0;
	if (stack_a)
	{
		while (stack_a != NULL)
		{
			printf("%d\n", stack_a->value);
			stack_a = stack_a->next;
		}
	}
}
static void ft_plstadd_back(t_plist **lst, t_plist *new)
{
	t_plist *elem;

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

static void ft_create_list(char **array)
{
	t_plist *head;
	t_plist *current;
	int		i;

	i = 1;
	head = malloc(sizeof(t_plist));
	if (!head)
		ft_error(1);
	head->value = ft_atoi(array[0]);
	head->next = NULL;
	current = head;
	while (array[i])
	{
		current = malloc(sizeof(t_plist));
		if (!current)
			ft_error(1);
		current->value = ft_atoi(array[i++]);
		current->next = NULL;
		ft_plstadd_back(&head, current);
	}
	ft_print_stack(head);
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
		char **new_array;
		
		new_array = ft_split(argv[1], ' ');
		if (ft_array_len(new_array) == 1)
		{
			if (ft_isint(new_array[0]))
				exit(0);
			else
				ft_error(1);
		}
	}
	else
		return (0);
}