#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	fd1;
	int fd2;
	char 	*line;

	fd1 = open("text.txt", O_RDONLY);
	fd2 = open("text1.txt", O_RDONLY);

	line  = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line  = get_next_line(fd1);
	printf("%s", line);
	free(line);
	line  = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line  = get_next_line(fd1);
	printf("%s", line);
	free(line);
	close(fd1);
	close(fd2);


	return (0);
}
//leaks --atExit -- ./a.out