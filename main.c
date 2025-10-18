#include "get_next_line.h"

int main(){
	int fd = open("test", O_RDONLY);
	char *line;
	while((line = get_next_line(fd)))
	{
		
	 }
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
		
	close(fd);
}