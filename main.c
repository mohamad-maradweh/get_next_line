#include "get_next_line.h"

int	main(void)
{
	int a = 4;
	int fd = open("test", O_RDONLY);
	char *line;

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
		// 	line = get_next_line(fd);
		// printf("%s", line);
		// free(line);
		// 	line = get_next_line(fd);
		// printf("%s", line);
		// free(line);
		// 	line = get_next_line(fd);
		// printf("%s", line);
		// free(line);	
		// 	line = get_next_line(fd);
		// printf("%s", line);
		// free(line);
		// 	// line = NULL;
		// printf("%s", line);
		// free(line);	
		// 	line = get_next_line(fd);
		// printf("%s", line);
		// free(line);
	close(fd);
}