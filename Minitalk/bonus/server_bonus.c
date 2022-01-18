/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:26:22 by marlean           #+#    #+#             */
/*   Updated: 2022/01/18 17:13:18 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_sighandle(int signal, siginfo_t *siginfo, void *context)
{
	static int	i = 0;
	static char	c = 0;
	static int	nullcount = 0;

	(void)context;
	if (signal == SIGUSR1)
		c = c | 1;
	if (signal == SIGUSR2)
		nullcount++;
	if (++i == 8)
	{	
		i = 0;
		if (nullcount == 8)
		{
			kill(siginfo->si_pid, SIGUSR2);
			return ;
		}
		ft_printf("%c", c);
		c = 0;
		nullcount = 0;
	}
	else
		c = c << 1;
}

int	main(void)
{
	struct sigaction	s_servaction;

	ft_printf("Server PID: %d\n", getpid());
	s_servaction.sa_sigaction = ft_sighandle;
	s_servaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_servaction, NULL);
	sigaction(SIGUSR2, &s_servaction, NULL);
	while (1)
		pause();
	return (0);
}
