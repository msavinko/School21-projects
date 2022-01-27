#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int	ft_atoi(const char *str);

void handle_signal1(int signal)
{
	printf("Hello signal %d\n", signal);
}
void handle_signal2(int signal)
{
	printf("Hello signal %d\n", signal);
}

int main(int argc, char *argv[])
{
	int i = 0;
	int pid;
	printf("%d\n", getpid());
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		printf("%d\n", pid);
	}
	else
	{
		
	}
	signal(SIGUSR1, handle_signal1);
	signal(SIGUSR2, handle_signal2);


	return (0);
}