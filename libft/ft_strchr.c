/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:05:19 by gsysaath          #+#    #+#             */
/*   Updated: 2017/12/22 00:02:31 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	c2;

	c2 = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			return ((char *)s + i + 1);
		i++;
	}
	if (s[i] == c2)
		return ((char *)s + i);
	return (NULL);
}
