/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariasavinova <mariasavinova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:30:28 by marlean           #+#    #+#             */
/*   Updated: 2022/01/31 16:58:26 by mariasavino      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_plist
{
	int				value;
	struct s_plist *next;
}					t_plist;

int		ft_isint(char *str);
void	ft_error(int error_code);
void	ft_check_int(char **array);
void	ft_check_repeat(char **array);
int		ft_array_len(char **array);
int		ft_create_int_array_and_check_sort(char **array, int len);

#endif