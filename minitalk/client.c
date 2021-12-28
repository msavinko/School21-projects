#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int	ft_atoi(const char *str);

void handle_signal(int signal)
{
	printf("Hello signal %d\n", signal);
}

int main(int argc, char *argv[])
{
	int i = 0;
	int pid;
	signal(SIGTERM, handle_signal);

	while (1)
	{
		printf("i = %d\n", i);
		i++;
		sleep(1);
	}

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		//printf("%d", pid);
	}
	return (0);
}