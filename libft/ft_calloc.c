/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:41:36 by marlean           #+#    #+#             */
/*   Updated: 2021/10/21 22:20:53 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;
	size_t	i;
	size_t	quant;

	i = 0;
	quant = count * size;
	if (!quant)
		quant = 1;
	pointer = malloc(quant);
	if (!(pointer))
		return (NULL);
	while (i < quant)
	{
		pointer[i] = 0;
		i++;
	}
	return ((void *)pointer);
}
