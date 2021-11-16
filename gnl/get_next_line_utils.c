/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:51:29 by marlean           #+#    #+#             */
/*   Updated: 2021/11/16 12:47:20 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)s;
	if (!s)
		return (NULL);
	while (res[i])
	{
		if (res[i] == (char)c)
			return (&res[i]);
		i++;
	}
	if (c == '\0')
		return (&res[i]);
	return (NULL);
}
