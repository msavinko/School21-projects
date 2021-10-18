/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:37:34 by marlean           #+#    #+#             */
/*   Updated: 2021/10/17 19:47:27 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	str = (char *)s;
	while (str[len])
	{
		len++;
	}
	while (len >= 0)
	{
		if (str[len] == c)
			return (&str[len]);
		len--;
	}
	if (c == '\0')
		return (&str[len]);
	return (NULL);
}