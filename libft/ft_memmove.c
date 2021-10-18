/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:20:13 by marlean           #+#    #+#             */
/*   Updated: 2021/10/18 15:48:08 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{

	unsigned char		*pdest;
	unsigned const char	*psource;

	pdest = dest;
	psource = source;
	if (!dest && !source)
		return (dest);
	if (dest < source)
		ft_memcpy(dest, source, n);
	else
	{	
		while (n--)
		{
			pdest[n] = psource[n];
		}
	}
	return (dest);
}
