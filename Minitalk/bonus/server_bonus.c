/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:26:22 by marlean           #+#    #+#             */
/*   Updated: 2022/01/20 18:31:20 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
static void	ft_send_responce(int pid, int count)
{
	while (count--)
		kill(pid, SIGUSR1);
	kill (pid, SIGUSR2);
}
static void	ft_sighandle(int signal, siginfo_t *siginfo, void *context)
{
	static int	i = 0;
	static char	c = 0;
	static int	pid = 0;
	static int	nullcount = 0;
	static int	count = 0;

	(void)context;
	if (!pid || pid != siginfo->si_pid)
	{
		i = 0;
		c = 0;
		pid = siginfo->si_pid;
	}
	c |= (signal == SIGUSR1);
	nullcount += (signal == SIGUSR2);
	if (++i == 8)
	{	
		if (nullcount == 8)
		{	
			ft_send_responce(pid, count);
			kill(pid, SIGUSR2);
			return ;
		}
		i = 0;
		count = write(1, &c, 1);
		c = 0;
		nullcount = 0;
		kill(pid, SIGUSR1);
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
