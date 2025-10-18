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

#include "get_next_line.h"

char *refill_backup_data(char *backup_data)
{
	//char *line;
	size_t j;
	unsigned int first;
	size_t len_backup_data;

	if(!backup_data)
		return (NULL);
	len_backup_data = ft_strlen(backup_data); 
	first = 0;
	j = 0;
	while (backup_data[j] != '\n')
		j++;
	first = j;
	backup_data = ft_substr(backup_data, first, len_backup_data - j);
	if(!backup_data)
	{
		free(backup_data);
		return (NULL);
	}
	return (backup_data);
}

char	*get_line(char *backup_data)
{
	char *line;
	size_t j;
	size_t first;
	size_t len_backup_data;

	if(!backup_data)
		return (NULL);
	len_backup_data = ft_strlen(backup_data);
	first = 0;
	j = 0;
	while ( backup_data[j] || backup_data[j] != '\n')
		j++;
	line = malloc(j + 1 + (backup_data[j] == '\n'));
	if(!line)
		return (NULL);
	line = ft_substr(backup_data, first, j + backup_data[j] == '\n');
	return (line);
}

char    *read_file(int fd, char *backup_data)
{
	ssize_t numchar;
	char	*chunck;

	chunck = malloc (BUFFER_SIZE + 1);
	if(!chunck)
		return (NULL);
	numchar = 1;
	while((numchar > 0 && !ft_strchr(backup_data, '\n')))
	{	
		numchar = read(fd, chunck, BUFFER_SIZE);
		if(numchar == 0)
			break;
		if(numchar < 0)
			return (NULL);
		chunck[numchar] = '\0';
		backup_data = ft_strjoin(backup_data, chunck);
		if(!backup_data)
		{
			return (NULL);
		}
	}
	free(chunck);
	return (backup_data);
}

char *get_next_line(int fd)
{
	char *line;
	static char *backup_data;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	backup_data = read_file(fd, backup_data);
	if (!backup_data)
	{
		free(backup_data);
		return (NULL);
	}
	line = get_line(backup_data);
	if (!line)
	{
		free(backup_data);
		return (NULL);
	}
	backup_data = refill_backup_data(backup_data);
	if (!backup_data)
	{
		free(backup_data);
		return (NULL);
	}
	return (line);
}
