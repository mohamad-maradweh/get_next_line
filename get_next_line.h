
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define  BUFFER_SIZE 42
#endif

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char *get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char *ft_strchr(const char *s, int c);
size_t  ft_strlen(char  const   *s);
char	*ft_strdup(const char *s);
char    *read_file(int fd, char *backup_data);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *refill_backup_data(char *backup_data);
char	*get_line(char *backup_data);

#endif