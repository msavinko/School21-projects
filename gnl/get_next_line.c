/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:15:46 by marlean           #+#    #+#             */
/*   Updated: 2021/11/08 17:18:31 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	int			len;
	char		*buff;
	char		*result;
	static char	*rest = "\0";

	if (fd < 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE);
	if (!buff)
		return (NULL);
	len = 1;
	printf("buff: %s\n", buff);
	while (ft_strchr(buff, '\n') == NULL && len > 0)
	{
		
		len = read(fd, buff, BUFFER_SIZE);
		
		buff[len] = '\0';
		printf("buff: %s\n", buff);
		result = ft_strjoin(rest, buff);
		rest = result;
	}
	result = ft_strdup(rest);
	rest = ft_strchr(buff, '\n');
	printf("result: %s\n", result);
	printf("rest: %s\n", rest);
	return (result);
}
