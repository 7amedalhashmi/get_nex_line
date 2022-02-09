#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>

// # define BUFFER_SIZE 42

size_t	ft_strlen(char *c);
char	*ft_strchr(char *s, int c);
char    *ft_strjoin(char *s1, char *s2);
char    *new_sbuf(char *sbuf);
char    *return_new_line(char *sbuf);
char    *readl(int fd, char *sbuf);
char    *get_next_line(int fd);
char	ft_str_init(void);

#endif