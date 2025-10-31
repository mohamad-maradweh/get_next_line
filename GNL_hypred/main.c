/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarad <malmarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:21:06 by malmarad          #+#    #+#             */
/*   Updated: 2025/10/31 14:52:50 by malmarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("test.txt", O_RDONLY);
	i = 0;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%d)line : %s\n", i++, line);
		free(line);
	}
	close(fd);
}
