/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:48:59 by marlean           #+#    #+#             */
/*   Updated: 2021/11/10 17:07:23 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	if (!s || !c)
		return (NULL);
	res = (char *)s;
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

char	*ft_strdup_beforen(const char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1);
	pointer = malloc(sizeof(char) * (size + 1));
	if (!(pointer))
		return (NULL);
	while (s1[i] != '\n')
	{
		pointer[i] = s1[i];
		i++;
	}
	pointer[i] = '\n';
	return (pointer);
}
char	*ft_strdup_before_null(const char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1);
	pointer = malloc(sizeof(char) * (size + 1));
	if (!(pointer))
		return (NULL);
	while (s1[i] != '\0')
	{
		pointer[i] = s1[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
char	*ft_strdup_aftern(char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1);
	pointer = malloc(sizeof(char) * (size + 1));
	if (!(pointer))
		return (NULL);
	while (s1[i] != '\n' && s1[i] != '\0')
		i++;
	i++;
	// if (s1[i] == '\0')
	// {	
	// 	free(s1);
	// 	return (NULL);
	// }
	while (s1[i] != '\0')
	{
		pointer[j] = s1[i];
		i++;
		j++;
	}
	pointer[j] = '\0';
	return (pointer);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
