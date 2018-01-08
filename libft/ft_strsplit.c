/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:32:20 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/24 02:25:25 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	*v;
	char	d[2];

	d[0] = c;
	d[1] = '\0';
	v = (char *)s;
	if (v == NULL)
		return (NULL);
	return (ft_split(v, d));
}
