/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:06:09 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/03 14:09:52 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_is_line(char *str)
{
printf("la\n");
	int	i;

	i = -1;
	while (str[i++] != '\n')
		if (str[i] == '\0')
		{
			return (0);
		}
printf("i = %d\n", i);
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*stake;
	char		*ret;
	char		*buff;
	int			i;
	int			len_line;

	i = 0;
	len_line = 0;
	if (!stake)
	{
		stake = malloc(BUFFER_SIZE);
		if (!stake)
			return (0);
	}
	buff = ft_strnew(BUFFER_SIZE);
	while (len_line == 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1 || (i == 0 && !stake))
			return ("NULL");
//printf("buff = %s\n", buff);
		stake = ft_strjoin(stake, buff);
//printf("stake = %s\n", stake);
		len_line = ft_is_line(stake);
	}
	ret = ft_create_line(stake, len_line);
	return (ret);
}

char	*ft_create_line(char *stake, int len_line)
{
	char	*ret;
	int		i;

	i = 0;
	ret = ft_strnew(len_line);
	while (i <= len_line)
	{
		ret[i] = stake[i];
		i++;
	}
	free(stake);
	stake = ft_strsub(stake, len_line, BUFFER_SIZE);
	return (ret);
}
