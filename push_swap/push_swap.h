/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariasavinova <mariasavinova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:30:28 by marlean           #+#    #+#             */
/*   Updated: 2022/02/03 23:16:37 by mariasavino      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# define INT_MAX 2147483647
# define INT_MIN -2147483647

typedef struct s_pslist
{
	int				value;
	int				min;
	int				max;
	struct s_pslist	*next;
}					t_pslist;

void		ft_error(int error_code);
int			ft_isint(char *str);
int			ft_check(char **array);
int			ft_array_len(char **array);
int			ft_create_int_array_and_check_sort(char **array, int len);

void		ft_push_swap(char **array);
t_pslist	*ft_create_list(char **array);
void		ft_pslstadd_back(t_pslist **lst, t_pslist *new);
int			ft_pslstsize(t_pslist *lst);

void		ft_push(t_pslist **stack_a, t_pslist **stack_b, int stack_num);
void		ft_swap(t_pslist **stack, int flag, int stack_num);
void		ft_rotate(t_pslist **stack, int flag, int stack_num);
void		ft_rev_rotate(t_pslist **stack, int flag, int stack_num);
void		ft_double(t_pslist **stack_a, t_pslist **stack_b, void (*ft_action)
				(t_pslist **stack, int flag, int stack_num));

t_pslist	*ft_pslstlast(t_pslist *lst);
t_pslist	*ft_ps_one_before_lstlast(t_pslist *lst);

void	ft_sort_three(t_pslist **stack);
void	ft_sort_five(t_pslist **stack_a, t_pslist **stack_b);
int		ft_find_min(t_pslist **stack);

void	ft_print_stack(t_pslist *stack, char c);
void		ft_print_arr(char **array);

#endif