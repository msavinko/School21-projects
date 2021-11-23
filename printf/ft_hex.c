/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:05:46 by marlean           #+#    #+#             */
/*   Updated: 2021/11/23 20:11:50 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long int p, int flag)
{
	char	*hex;
	char	address[30];
	int		i;
	int		len;

	i = 0;
	if (!p)
		address[i++] = '0';
	if (flag == 1)
		hex = "0123456789abcdef";
	else if (flag == 2)
		hex = "0123456789ABCDEF";
	while (p)
	{
		address[i] = hex[p % 16];
		p /= 16;
		i++;
	}
	len = i;
	address[i] = '\0';
	while (i--)
		ft_putchar(address[i]);
	return (len);
}

int	ft_point_hex(unsigned long int p)
{
	char	*hex;
	char	address[30];
	int		i;
	int		len;

	i = 0;
	if (!p)
		address[i++] = '0';
	hex = "0123456789abcdef";
	while (p)
	{
		address[i] = hex[p % 16];
		p /= 16;
		i++;
	}
	len = i;
	address[i] = '\0';
	ft_putstr("0x");
	while (i--)
		ft_putchar(address[i]);
	return (len + 2);
}
