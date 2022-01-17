/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:40:33 by marlean           #+#    #+#             */
/*   Updated: 2022/01/17 19:40:33 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void ft_sighandle(int signal, siginfo_t *siginfo, void *context)
{
	(void)context;
	siginfo = NULL;

	
		if (signal == SIGUSR1)
			ft_printf("1");
		else if (signal == SIGUSR2)
			ft_printf("0");

	//ft_printf("\nPID of the sender: %d\n", pid);
}

int main(void)
{
	struct sigaction s_sa;

	ft_printf("Server PID: %d\n", getpid());
	s_sa.sa_sigaction = ft_sighandle; 
	//если через структуру проходит сигнал, он направляется в функцию
	s_sa.sa_flags = SA_SIGINFO; 
	// по стандарту можно принимать только один параметр, но с этим флагом можно принимать 3 параметра

	sigaction(SIGUSR1, &s_sa, NULL); 
	sigaction(SIGUSR2, &s_sa, NULL); 
	// третий параметр для архива сигналов;

	while(1)
		pause(); // ожидает сигнал


	return (0);
}



