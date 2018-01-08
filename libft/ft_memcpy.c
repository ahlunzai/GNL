/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 23:28:52 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 02:50:46 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t					c;
	unsigned char			*dst2;
	const unsigned char		*src2;

	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	c = 0;
	while (c < n)
	{
		dst2[c] = src2[c];
		c++;
	}
	return (dst);
}
