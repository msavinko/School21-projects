/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:08:14 by marlean           #+#    #+#             */
/*   Updated: 2021/11/16 12:46:45 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strcut_gnl(char *s1)
{
	char	*pointer;
	size_t	i;
	size_t	size;
	size_t	j;

	j = 0;
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
		while (s1[i] != '\0')
			pointer[j++] = s1[i++];
		pointer[j] = '\0';
		free(s1);
		return (pointer);
	}
	free(s1);
	return (NULL);
}

static char	*ft_strdup_gnl(char *s1)
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

static char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*join;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	i = 0;
	j = 0;
	len1 = ft_strlen_gnl(s1);
	len2 = ft_strlen_gnl(s2);
	join = (char *)malloc(len1 + len2 + 1);
	if (!join)
		return (NULL);
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}
	while (j < len2)
		join[i++] = s2[j++];
	join[i] = '\0';
	free(s1);
	free(s2);
	return (join);
}

char	*get_next_line(int fd)
{
	char		*buff;
	char		*line;
	static char	*rest;
	ssize_t		read_byte;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_byte = 1;
	while (ft_strchr_gnl(rest, '\n') == NULL && read_byte > 0)
	{
		buff = malloc(BUFFER_SIZE + 1);
		if (!buff)
			return (NULL);
		read_byte = read(fd, buff, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_byte] = '\0';
		rest = ft_strjoin_gnl(rest, buff);
	}
	line = ft_strdup_gnl(rest);
	rest = ft_strcut_gnl(rest);
	return (line);
}
