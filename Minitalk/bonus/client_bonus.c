/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:25:45 by marlean           #+#    #+#             */
/*   Updated: 2022/01/17 13:44:38 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minitalk_bonus.h"

int	ft_mini_atoi(const char *str)
{
	unsigned int			i;
	unsigned long long int	num;

	i = 0;
	num = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > 9223372036854775807)
			return (-1);
		num = num * 10 + (str[i++] - '0');
	}
	return ((int)num);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_send_string (char *str)
{
	int		i = 0;
	//char	c;
	while (*str)
	{
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int pid;

	ft_printf("\nI am bonus, my PID: %d\n", getpid());
	if (argc == 3)
	{
		pid = ft_mini_atoi(argv[1]);
		ft_printf("%d\n", pid);

		if (ft_str_is_numeric(argv[1]) == 1)
			ft_send_string(argv[2]);
		else
			ft_printf("Wrong PID, PID should be numeric");
	}
	else
	{
		ft_printf("Wrong input, please try again\n");
	}
	return (0);
}