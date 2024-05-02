#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd = open("/home/user/level09/token", O_RDONLY);
	char c;

	for (int i = 0; read(fd, &c, 1) == 1; i++)
	{
		printf("%c", c - i);
	}
	printf("\n");
 	close(fd);

	return (0);
}
