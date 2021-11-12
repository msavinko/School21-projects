/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:51:29 by marlean           #+#    #+#             */
/*   Updated: 2021/11/12 22:02:08 by marlean          ###   ########.fr       */
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

char	*ft_strcut_n(char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	size;
	size_t	j;

	i = 0;
	j = 0;
	
	while (s1[i] != '\n' && s1[i] != '\0')
		i++;

	if (s1[i] == '\n')
	{
		size = ft_strlen(s1);
		pointer = malloc(sizeof(char) * (size - i));
		if (!pointer)
			return (NULL);
		i++;
		while (s1[i] != '\0')
		{
			pointer[j] = s1[i];
			i++;
			j++;
		}
		pointer[j] = '\0';
		free(s1);
		return (pointer);
	}

	free(s1);
	return (NULL);
}

char	*ft_strdup(char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	size;

	i = 0;
	if (s1[i] == '\0')
		return (NULL);
	size = ft_strlen(s1);
	pointer = malloc(sizeof(char) * (size + 1));
	if (!(pointer))
		return (NULL);
	while (s1[i] != '\n' && s1[i] != '\0')
	{
		pointer[i] = s1[i];
		i++;
	}
	if (s1[i] == '\n')
	{
		pointer[i] = s1[i];
		i++;
		// pointer[i + 1] = '\0';
		// return (pointer);
	}
	pointer[i] = '\0';
	return (pointer);

}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *)malloc(len1 + len2 + 1);
	if (!join)
		return (NULL);
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	free(s1);
	free(s2);
	return (join);
}
