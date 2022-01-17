/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marlean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:26:22 by marlean           #+#    #+#             */
/*   Updated: 2022/01/17 13:29:08 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void ft_sighandle(int signal, siginfo_t *siginfo, void *context)
{
	context = NULL;
	
	if (signal == 30)
		ft_printf("1");
	else if (signal == 31)
		ft_printf("2");
	else
		ft_printf("3");
	ft_printf("\nPID of the sender: %d\n", siginfo->si_pid);
}
// void ft_function2()
// {
// 	write(1, "2", 1);
// }

int main(void)
{
	struct sigaction s_sa;

	ft_printf("I am bonus, Server PID: %d\n", getpid());

	s_sa.sa_flags = SA_SIGINFO; // по стандарту можно принимать только один параметр, но с этим флагом можно принимать 3 параметра
	s_sa.sa_sigaction = ft_sighandle; //если через структуру проходит сигнал, он направляется в функцию

	sigaction(SIGUSR1, &s_sa, NULL); // третий параметр для архива сигналов;
	sigaction(SIGUSR2, &s_sa, NULL); 
	// signal(SIGUSR1, ft_function1);
	// signal(SIGUSR2, ft_function2);
	while(1)

		pause();
	return (0);
}


//struct sigaction sa;
//sa.sa_flags = SA_SIGINFO; //заставляет ф-ию иметь 3 параметра.
//sa.sa_sigaction = ft_handler //перенаправляем в функцию
//sigaction(SIGUSR1, &sa, NULL); // обработка сигнала идет в функцию
//sigaction(SIGUSR2, &sa, NULL); 

//void ft_handler(int signum, siginfo_t *sig, void *context)
//int signum - посмотрит номер входящего сигнала
//siginfo_t *sig - структура
//void *context - зануляем (не нужно обращаться к архивам)