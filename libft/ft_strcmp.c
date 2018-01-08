/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:35:01 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 04:14:12 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*v1;
	unsigned char	*v2;

	i = 0;
	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	while (v1[i] && v2[i] && v1[i] == v2[i])
		i++;
	return (v1[i] - v2[i]);
}
