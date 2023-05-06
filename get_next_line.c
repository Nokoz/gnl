/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:30 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/06 20:06:13 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stake;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	stake = ft_read(fd, stake);
	if (!stake)
		return (NULL);
	line = ft_line(stake);
	stake = ft_next(stake);
	return (line);
}

char	*ft_read(int fd, char *stake)
{
	char	*buffer;
	int		read_value;

	if (!stake)
	{
		stake = ft_strnew(1);
		if (!stake)
			return (NULL);
	}
	buffer = ft_strnew(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	read_value = 1;
	while (read_value > 0)
	{
		read_value = read(fd, buffer, BUFFER_SIZE);
		if (read_value == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_value] = '\0';
		stake = ft_join(stake, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (stake);
}

char	*ft_join(char *stake, char *buff)
{
	char	*tmp;

	tmp = ft_strjoin(stake, buff);
	free(stake);
	return (tmp);
}

char	*ft_line(char *stake)
{
	char	*new_line;
	int		i;

	i = 0;
	if (!stake[i])
		return (NULL);
	while (stake[i] && stake[i] != '\n')
		i++;
	new_line = ft_strnew(i + 2);
	i = 0;
	while (stake[i] && stake[i] != '\n')
	{
		new_line[i] = stake[i];
		i++;
	}
	if (stake[i] && stake[i] == '\n')
		new_line[i] = '\n';
	return (new_line);
}

char	*ft_next(char *stake)
{
	char	*new_stake;
	int		i;

	i = 0;
	while (stake[i] && stake[i] != '\n')
		i++;
	if (!stake[i])
	{
		free(stake);
		return (NULL);
	}
	new_stake = ft_substr(stake, i + 1, ft_strlen(stake));
	if (!new_stake)
		return (NULL);
	free(stake);
	return (new_stake);
}
