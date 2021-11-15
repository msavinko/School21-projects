/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:09:19 by marlean           #+#    #+#             */
/*   Updated: 2021/11/15 16:31:19 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_cut_two_gnl(char *pointer, char*s1, int i)
{
	size_t	j;

	j = 0;
	while (s1[i] != '\0')
	{
		pointer[j] = s1[i];
		i++;
		j++;
	}
	pointer[j] = '\0';
	return (pointer);
}

char	*ft_strcut_gnl(char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	size;

	i = 0;
	while (s1[i] != '\n' && s1[i] != '\0')
		i++;
	if (s1[i] == '\n')
	{
		size = ft_strlen_gnl(s1);
		pointer = malloc(sizeof(char) * (size - i));
		if (!pointer)
			return (NULL);
		i++;
		pointer = ft_cut_two_gnl(pointer, s1, i);
		free(s1);
		return (pointer);
	}
	free(s1);
	return (NULL);
}

char	*ft_strdup_gnl(char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	size;

	i = 0;
	if (s1[i] == '\0')
		return (NULL);
	size = ft_strlen_gnl(s1);
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
	}
	pointer[i] = '\0';
	return (pointer);
}

char	*ft_join_two_gnl(char *join, char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen_gnl(s1);
	len2 = ft_strlen_gnl(s2);
	i = 0;
	j = 0;
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}
	while (j < len2)
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen_gnl(s1);
	len2 = ft_strlen_gnl(s2);
	join = (char *)malloc(len1 + len2 + 1);
	if (!join)
		return (NULL);
	join = ft_join_two_gnl(join, s1, s2);
	free(s1);
	free(s2);
	return (join);
}
