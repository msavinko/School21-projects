#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char 	*line;

	fd = open("text.txt", O_RDONLY);
	if (!fd)
		return (0);
	printf("***********************\n");
	for (int i = 1; i < 10; i++)
	{	
		line = get_next_line(fd);
		printf("%d MAIN: %s", i, line);
		free(line);
	}
	close(fd);
	return (0);
}
//leaks --atExit -- ./a.out