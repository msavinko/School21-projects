/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:45:02 by marlean           #+#    #+#             */
/*   Updated: 2021/10/17 19:46:28 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int ch, size_t size)
{
	unsigned int	i;
	char			*ptarr;

	i = 0;
	ptarr = arr;
	while (i < size)
	{
		ptarr[i] = ch;
		i++;
	}
	return (ptarr);
}
