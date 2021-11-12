/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:08:14 by marlean           #+#    #+#             */
/*   Updated: 2021/11/12 21:37:44 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

// char	*ft_end_line(char *rest, char *buff)
// {
// 	char	*line;
// 	if (ft_strchr(rest, '\n'))
// 	{
// 		line = ft_strdup(rest);
// 	}
// }

char	*get_next_line(int fd)
{
	char		*buff;
	char		*line;
	static char	*rest;
	ssize_t		read_byte;
	
	if (fd < 0 || (BUFFER_SIZE <= 0 && BUFFER_SIZE > INT_MAX))
		return (NULL);
	read_byte = 1;
	while (ft_strchr(rest, '\n') == NULL && read_byte > 0) //пока в остатке нет \n
	{
		buff = malloc(BUFFER_SIZE + 1);   //бронируем память для буф
		if (!buff)
			return (NULL);
		read_byte = read(fd, buff, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_byte] = '\0';
		rest = ft_strjoin(rest, buff); //внутри очистили rest and buff	
		//printf("\n1 rest: %p", rest); 
	}
	line = ft_strdup(rest); // копируем в line первые символы до \n включительно
	//printf("\n2 line: %s", line);
	rest = ft_strcut_n(rest); // обрезает строку остатка
	//printf("\n3 rest: %s", rest);
	return (line);
}
