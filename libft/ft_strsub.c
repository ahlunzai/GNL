/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:40:36 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/22 14:16:26 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	s2 = NULL;
	if (s)
	{
		if (!(s2 = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		i = 0;
		while (i < len)
		{
			s2[i] = s[start + i];
			i++;
		}
		s2[i] = '\0';
	}
	return (s2);
}
