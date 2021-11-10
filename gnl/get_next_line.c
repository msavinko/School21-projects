/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:15:46 by marlean           #+#    #+#             */
/*   Updated: 2021/11/10 17:12:57 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#define BUFFER_SIZE 1

char	*get_next_line(int fd)
{
	char		buff[BUFFER_SIZE + 1];
	char		*line;
	static char	*rest;
	size_t		len;

	if (fd < 0 || (BUFFER_SIZE <= 0 && BUFFER_SIZE <= OPEN_MAX))
		return (NULL);
	len = 1;
	
	if (ft_strchr(rest, '\n'))
	{
		
		line = ft_strdup_beforen(rest);
		rest = ft_strdup_aftern(rest);
		return (line);
	}
	while ((len = read(fd, buff, BUFFER_SIZE)) && len > 0)
	{
		buff[len] = '\0';
		if (ft_strchr(buff, '\n'))
		{

			line = ft_strjoin(rest, buff);
			line = ft_strdup_beforen(line);
			free(rest);
			rest = ft_strdup_aftern(buff);			
			return (line);
		}
		rest = ft_strjoin(rest, buff);
	}
	if (rest)
	{
		line = ft_strdup_before_null(rest);
		rest = NULL;
		return (line);
	}
	return (NULL);
}
