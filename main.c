#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("line = %s\n", line);
		free(line);
	}
	close(fd);
}
