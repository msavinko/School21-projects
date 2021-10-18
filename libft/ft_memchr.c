/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:50:32 by marlean           #+#    #+#             */
/*   Updated: 2021/10/17 19:46:06 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = (char *)s;
	while (i < n)
	{
		if (res[i] == c)
			return (&res[i]);
		i++;
	}
	return (NULL);
}
