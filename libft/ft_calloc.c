/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:41:36 by marlean           #+#    #+#             */
/*   Updated: 2021/10/18 18:34:53 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;
	size_t	i;

	i = 0;
	if ((pointer = malloc(size * count)) == NULL)
		return (NULL);
	while (i < (count * size))
	{
		pointer[i] = 0;
		i++;
	}
	return ((void *)pointer);
}
