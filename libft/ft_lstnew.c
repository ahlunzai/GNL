/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 01:47:30 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/23 03:01:29 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*newcontent;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == (NULL))
	{
		new->content = (NULL);
		new->content_size = 0;
		new->next = (NULL);
		return (new);
	}
	newcontent = ft_memalloc(content_size);
	newcontent = ft_memcpy(newcontent, content, content_size);
	new->content = newcontent;
	new->content_size = content_size;
	new->next = (NULL);
	return (new);
}
