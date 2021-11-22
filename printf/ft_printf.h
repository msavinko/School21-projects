/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:09:18 by marlean           #+#    #+#             */
/*   Updated: 2021/11/22 16:06:42 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		main(void);
int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);

#endif