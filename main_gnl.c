/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:49:58 by gvardaki          #+#    #+#             */
/*   Updated: 2023/05/03 16:59:24 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		i = 0;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	while (i < 5)
	{
		printf("	new line = %s", line);
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (0);
}
