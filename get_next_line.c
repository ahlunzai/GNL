/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 01:54:28 by gsysaath          #+#    #+#             */
/*   Updated: 2018/01/12 01:08:52 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char		*beforebn(char *buf, char *tmp)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (ft_strjoin(buf, tmp));
	while (s1[i] != '\n')
		i++;
	s1[i] = '\0';
	return (ft_strdup(s1));
}

static int			backslashndanstmp(char **line, t_2list *save, t_2list *list)
{
	*line = beforebn(list->buf, list->tmp);
	list->buf = ft_strdup(ft_strchr(ft_strjoin(list->buf, list->tmp), '\n'));
	list = save;
	return (1);
}

static int			dansbuf(char **line, t_2list *save, t_2list *list)
{
	*line = beforebn("", list->buf);
	list->buf = ft_strdup(ft_strchr(list->buf, '\n'));
	list = save;
	return (1);
}

t_2list		*ini_list(const int fd)
{
	t_2list		*list;

	list = (t_2list *)malloc(sizeof(t_2list));
	list->buf = "";
	list->fd = fd;
	list->next = (t_2list *)malloc(sizeof(t_2list));
	return (list);
}

int			get_next_line(const int fd, char **line)
{
	static t_2list	*list = NULL;
	t_2list			*save;
	int				ret;

	if (list == NULL)
		list = ini_list(fd);
	save = list;
	while (list != NULL && list->fd != fd)
		list = list->next;
	if (list == NULL)
		ini_list(fd);
	if (fd == -1 || BUFF_SIZE < 1 || read(fd, "", 0))
		return (-1);
	while ((ret = read(fd, list->tmp, BUFF_SIZE)) != 0)
	{
		list->tmp[ret] = '\0';
		if (ft_strchr(list->tmp, '\n') != NULL)
			return(backslashndanstmp(line, save, list));
		list->buf = ft_strjoin(list->buf, list->tmp);
	}
	if (list->buf != NULL && *(list->buf) != '\0')
	{
		if (ft_strchr(list->buf, '\n') != NULL)
			return (dansbuf(line, save, list));
		*line = ft_strdup(list->buf);
		list->buf = NULL;
		free(list);
		return (1);
	}
	return (0);
}
