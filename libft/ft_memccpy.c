/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 00:06:55 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/22 14:27:33 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	unsigned char		*src2;
	unsigned char		c2;

	if (n == 0)
		return (NULL);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (dst2[i] == c2)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
