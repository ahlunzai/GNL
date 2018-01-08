/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:14:34 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 03:39:08 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	size_t			memo;
	unsigned char	c2;

	i = 0;
	memo = 0;
	c2 = (unsigned char)c;
	if (c2 == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == c2)
			memo = i;
		i++;
	}
	if (s[i] == c2)
		return ((char *)s + memo);
	if (s[memo] != c2)
		return (NULL);
	else
		return ((char *)s + memo);
}
