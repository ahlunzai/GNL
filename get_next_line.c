/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 01:54:28 by gsysaath          #+#    #+#             */
/*   Updated: 2017/12/20 04:21:05 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

char		*beforebn(char *buf, char *tmp)
{
	int		i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = ft_strdup(buf);
	s2 = ft_strdup(tmp);
	while (s2[i] != '\n')
		i++;
	s2[i] = '\0';
	return (ft_strjoin(s1, s2));
}

static char			*bntmp(char **line, char *buf, char *tmp)
{
	*line = beforebn(buf, tmp);
	buf = ft_strdup(ft_strchr(tmp, '\n'));
	return (buf);
}

static char			*bnbuf(char **line, char *buf)
{
	*line = beforebn("", buf);
	buf = ft_strdup(ft_strchr(buf, '\n'));
	return (buf);
}

int			get_next_line(const int fd, char **line)
{
	static char		*buf = "";
	char			tmp[BUFF_SIZE + 1];
	int				ret;
	printf("mon buf au debut [%s]\n", buf);
	if (fd == -1 || BUFF_SIZE < 1 || read(fd, "", 0))
		return (-1);
	while ((ret = read(fd, tmp, BUFF_SIZE)) != 0)
	{
		tmp[ret] = '\0';
		printf("ici-----buf[%s] ici-----------tmp[%s]\n", buf, tmp);
		if (!(ft_strchr(tmp, '\n') == NULL))
		{
			buf = bntmp(line, buf, tmp);
			return (1);
		}
		buf = ft_strjoin(buf, tmp);
	}
	if (buf != NULL && *buf != '\0')
	{
		printf("je suis la [%s]\n", buf);
		if (ft_strchr(buf, '\n') != NULL)
		{
			buf = bnbuf(line, buf);
			return (1);
		}
		*line = ft_strdup(buf);
		buf = NULL;
		free(buf);
		return (1);
	}
	return (0);
}
