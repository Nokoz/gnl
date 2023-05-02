/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:09:42 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/02 11:04:56 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 200
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_new_line(char *str)
#endif
