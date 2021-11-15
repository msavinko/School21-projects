/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:08:14 by marlean           #+#    #+#             */
/*   Updated: 2021/11/15 16:05:57 by marlean          ###   ########.fr       */
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
