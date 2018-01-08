/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 02:15:15 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 02:50:31 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*v1;
	unsigned char	*v2;

	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (v1[i] != v2[i])
			return (v1[i] - v2[i]);
		i++;
	}
	return (0);
}
