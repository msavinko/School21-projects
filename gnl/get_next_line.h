/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:16:29 by marlean           #+#    #+#             */
/*   Updated: 2021/11/12 21:25:22 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

#ifndef BUFFER_SIZE
#  define BUFFER_SIZE 19
#endif

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *s1);
size_t	ft_strlen(const char *str);
char	*ft_strcut_n(char *s1);
char	*ft_strjoin(char *s1, char *s2);
//char	*ft_end_line(char *rest, char *buff);

#endif

