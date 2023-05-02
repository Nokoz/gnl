/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:06:09 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/02 11:04:24 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_new_line(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
		if (str[i] == '\n')
			return (i);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*ret;
	char		*buff;
	int			i;
	int			len_line;
	
	i = 0;
	while (len_line == 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
			return ("NULL");
		if (i == 0)
		{
			if (!buff)
				return ("NULL")
			ft_end;
			break;
		}
		len_line = ft_new_line(buff);
	}
	ret = ft_new(str, buff, len_line)
	return (ret);
}

char *ft_new(static char *str, char *buff, int len_line)
{
	char *ret;
	
}

char	*ft_strlcpy(char *buff, int len)
