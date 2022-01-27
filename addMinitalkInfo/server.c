#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int ft_printf(const char *format,... );

int main(void)
{
	ft_printf("%d\n", getpid());
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