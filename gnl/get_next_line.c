/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:15:46 by marlean           #+#    #+#             */
/*   Updated: 2021/11/10 15:45:37 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
//#define BUFFER_SIZE 50

char	*get_next_line(int fd)
{
	char		buff[BUFFER_SIZE + 1];
	char		*line;
	static char	*rest;
	//size_t		len;

	if (fd < 0 || (BUFFER_SIZE <= 0 && BUFFER_SIZE <= OPEN_MAX))
		return (NULL);
	buff[BUFFER_SIZE] = '\0';
	//len = 1;
	
	if (ft_strchr(rest, '\n')) //|| ft_strchr(rest, '\0'))
	{
		
		line = ft_strdup_beforen(rest);
		//printf("\n 5 line: %s\n", line);
		rest = ft_strdup_aftern(rest);
		//clean rest!!!!!!!!!!!!!!!!!!!!

		//printf("\n 6 rest: %s\n", rest);
		return (line);
	}
	while ((read(fd, buff, BUFFER_SIZE) > 0)) 
	//while ((len = read(fd, buff, BUFFER_SIZE)) && len > 0)
	{
		//buff[len] = '\0';
		//printf("BUFF: %s", buff);
		if (ft_strchr(buff, '\n'))
		{
			line = ft_strjoin(rest, buff);
			//printf("\n 1 line strjoin: %s", line);
			line = ft_strdup_beforen(line);
			//printf("\n 2 line strdup: %s", line);
			free(rest);
			rest = ft_strdup_aftern(buff);
			//printf("\n 3 rest strdup: %s", rest);
			
			return (line);
		}
		rest = ft_strjoin(rest, buff);
		
		// if (ft_strchr(buff, '\0'))
		// {
		// 	line = rest;
		// 	free(rest);
		// 	return (line);
		// }
			
		//printf("\n 4 rest: %s\n", rest);
	}
	return (NULL);
}
