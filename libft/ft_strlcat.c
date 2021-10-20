/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:30:24 by marlean           #+#    #+#             */
/*   Updated: 2021/10/19 12:58:32 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= destlen)
		return (dstsize + srclen);
	else if (dstsize - destlen <= srclen)
	{
		ft_memcpy(dst + destlen, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	else
		ft_memcpy(dst + destlen, src, srclen + 1);
	return (destlen + srclen);
}
