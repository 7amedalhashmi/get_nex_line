/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halhashm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:32:39 by halhashm          #+#    #+#             */
/*   Updated: 2022/02/13 20:32:41 by halhashm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include	<unistd.h>
# include	<stdio.h>
# include	<string.h>
# include	<fcntl.h>
# include	<stdlib.h>

size_t	ft_strlen(char *c);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*new_sbuf(char *sbuf);
char	*return_new_line(char *sbuf);
char	*readl(int fd, char *sbuf);
char	*get_next_line(int fd);
char	ft_str_init(void);

#endif
