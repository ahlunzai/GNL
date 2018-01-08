/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 01:00:15 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/24 01:48:05 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	new = NULL;
	if (!lst)
		return (NULL);
	if (lst)
	{
		new = f(lst);
		new->next = ft_lstmap(lst->next, f);
	}
	return (new);
}
