/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 03:53:18 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/23 04:32:38 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *blst;
	t_list *clst;

	clst = *alst;
	while (clst != NULL)
	{
		blst = clst->next;
		del(clst->content, clst->content_size);
		free(clst);
		clst = blst;
	}
	free(clst);
	*alst = NULL;
}
