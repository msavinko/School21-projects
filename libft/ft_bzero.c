/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:40:11 by marlean           #+#    #+#             */
/*   Updated: 2021/10/17 19:45:43 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	unsigned int	i;
	char			*pstr;

	i = 0;
	pstr = str;
	while (i < size)
	{
		pstr[i] = 0;
		i++;
	}
}
