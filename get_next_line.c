/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:06:09 by gvardaki          #+#    #+#             */
/*   Updated: 2023/04/26 14:44:54 by gvardaki         ###   ########.fr       */
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
			return ("ERROR");
		if (i == 0)
		{
			ft_end;
			break;
		}
		len_line = ft_new_line(buff);
	}
	ret = ft_new(str)
	return (ret);
}

char	*ft_strlcpy(char *buff, int len)
