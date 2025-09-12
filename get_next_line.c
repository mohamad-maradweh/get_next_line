/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarad <malmarad@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:56:48 by malmarad          #+#    #+#             */
/*   Updated: 2025/09/12 03:25:18 by malmarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h";
int checker(static  void    *stash)
{
	int ndx;

	ndx = 0;
	while (stash[ndx] != '\n')
		ndx++;
	return (ndx);
}
char	*new_line(static void*)
{
	j = checker(stash);
		stash[j] = '\0';
		if (j > 0)
		{
			line = ft_strjoin(line, stash);
			stash += j + 1;
			//1read_file(fd, buf, BUFFER_SIZE, stash);
		}
		else
}
char    *read_file(int fd, void *buf, size_t BUFFER_SIZE,  static  void *stash)
{
	ssize_t r;
	int j;                                                       // index of "\n"
	char    *line;
	
	r = read(fd, buf, BUFFER_SIZE);
	while(r > 0 && buf)
	{
		r = read(fd, buf, BUFFER_SIZE);
		stash = ft_strjoin(buf, stash);		
	}
	return (stash);
} 
char *get_next_line(int fd)
{
	void    *buff;
	char    *line;
	static  void *stash;

	buff = malloc (BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	buff = read_file(fd, buff, BUFFER_SIZE, stash);
	
}
