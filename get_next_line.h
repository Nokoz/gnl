/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:09:42 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/06 18:40:39 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif

#include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char		*get_next_line(int fd);
int			ft_is_line(char *str);
char		*ft_create_line(char *stake, int len_line);
size_t		ft_strlen(char *s);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strnew(size_t size);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strchr(const char *string, int chr);
char		*ft_read(int fd, char *stake);
char		*ft_join(char *stake, char *buff);
char		*ft_line(char *stake);
char		*ft_next(char *stake);
#endif
