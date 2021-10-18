/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:26:35 by marlean           #+#    #+#             */
/*   Updated: 2021/10/18 16:31:24 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';	
	return (ft_strlen(src));
}


// 	if (size != 0) {
// 		while (--size != 0) {
// 			if ((*pdst++ = *psrc++) == '\0')
// 				break;
// 		}
// 	}
// 	if (size == 0) {
// 		if (dstsize != 0)
// 			*pdst = '\0';
// 		while (*psrc++)
// 			;
// 	}
// 	return(psrc - src - 1);	
