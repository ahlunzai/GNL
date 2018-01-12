/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 00:01:20 by gsysaath          #+#    #+#             */
/*   Updated: 2018/01/12 00:28:06 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"
#include <stdio.h>

int     main(int ac, char **av)
{
	int		fd;
	char	*line;
	line = NULL;
	fd = open(av[1], O_RDONLY);
	if (ac == 2)
	{
		while(get_next_line(fd, &line) == 1)
		{
			write(1, line, ft_strlen(line));
			write(1, "\n\n", 2);
			free(line);
		}
	}
	printf("jai termine mon main");
	return (0);
}
