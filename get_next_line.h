/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:09:42 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/03 17:02:18 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 2
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
char		*ft_strsub(char *s, unsigned int start, size_t len);
void		*ft_memchr(void *s, int c, size_t n);
#endif
