#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("text.txt", O_RDONLY);
	if (!fd)
		return (0);
	printf("***********************\n");
	for (int i = 1; i < 9; i++)
		printf("%d MAIN: %s", i, get_next_line(fd));

	return (0);
}