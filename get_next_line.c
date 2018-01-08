/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 01:54:28 by gsysaath          #+#    #+#             */
/*   Updated: 2018/01/08 07:15:04 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static int			bntmp(char **line, char *buf, char *tmp)
{
	*line = beforebn(buf, tmp);
	buf = ft_strdup(ft_strchr(tmp, '\n'));
	printf("buf dans bntmp [%s]\n\n", buf);
	return (1);
}

void		ini_list(t_2list *list, const int fd)
{
		list->buf = "";
		list->fd = fd;
}

int			get_next_line(const int fd, char **line)
{
	static t_2list	*list = NULL;
	int				ret;

	while (list != NULL && list->fd != fd)
		list = list->next;
	if (list == NULL)
	{
		list = (t_2list *)malloc(sizeof(t_2list));
		ini_list(list, fd);
	}
	printf("buf dans main [%s]\n\n", list->buf);
	if (fd == -1 || BUFF_SIZE < 1 || read(fd, "", 0))
		return (-1);
	while ((ret = read(fd, list->tmp, BUFF_SIZE)) != 0)
	{
		list->tmp[ret] = '\0';
		printf("tmp [%s]\n\n", list->tmp);
		if (!(ft_strchr(list->tmp, '\n') == NULL))
			return(bntmp(line, list->buf, list->tmp));
		list->buf = ft_strjoin(list->buf, list->tmp);
	}
	if (list->buf != NULL && *(list->buf) != '\0')
	{
		if (ft_strchr(list->buf, '\n') != NULL)
			return (bntmp(line, "", list->buf));
		*line = ft_strdup(list->buf);
		list->buf = NULL;
		free(list);
		return (1);
	}
	return (0);
}
