#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

size_t	ft_strlen(const char *c);
char	*ft_strchr(const char *s, int c);
char    *ft_strjoin(char const *s1, char const *s2);
char    *new_sbuf(char *sbuf);
char    *return_new_line(char *sbuf);
char    *readl(int fd, char *sbuf);
char    *get_next_line(int fd);

#endif