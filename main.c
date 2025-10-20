#include "get_next_line.h"

int main(){
	int fd = open("test", O_RDONLY);
	char *line;
	while((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
	}
	close(fd);
}