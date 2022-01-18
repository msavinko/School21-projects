/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:40:33 by marlean           #+#    #+#             */
/*   Updated: 2022/01/18 16:21:08 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sighandle(int signal, siginfo_t *siginfo, void *context)
{
	static int	i = 0;
	static char	c = 0;

	(void)context;
	(void)siginfo;
	if (signal == SIGUSR1)
		c = c | 1;
	if (++i == 8)
	{	
		i = 0;
		ft_printf("%c", c);
		c = 0;
	}
	else
		c = c << 1;
}

int	main(void)
{
	struct sigaction	s_sa;

	ft_printf("Server PID: %d\n", getpid());
	s_sa.sa_sigaction = ft_sighandle;
	s_sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sa, NULL);
	sigaction(SIGUSR2, &s_sa, NULL);
	while (1)
		pause();
	return (0);
}
