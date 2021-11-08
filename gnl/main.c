#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	if (!fd)
		return (0);
	line = get_next_line(fd);
	//printf("result in main: \n%s\n", line);
	return (0);
}