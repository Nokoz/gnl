/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:06:09 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/02 17:08:50 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_is_line(char *str)
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
	static char	*stake;
	char		*ret;
	char		*buff;
	int			i;
	int			len_line;
	
	i = 0;
	len_line = ft_is_line(buff);
	while (len_line == 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
			return ("NULL");
		if (i == 0)
		{
			if (!stake)
				return ("NULL")
			ft_end;
			break;
		}
		len_line = ft_is_line(buff);
	}
	ret = ft_new(stake, buff, len_line)
	return (ret);
}

char *ft_new(static char *stake, char *buff, int len_line)
{
	char *ret;
	
}

char	*ft_strlcpy(char *buff, int len)
