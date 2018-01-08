/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 00:24:10 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 05:31:22 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dst2;
	const unsigned char		*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (src2 < dst2)
	{
		src2 = src2 + len;
		dst2 = dst2 + len;
		while (len-- > 0)
			*--dst2 = *--src2;
	}
	else if (dst2 < src2)
	{
		while (len-- > 0)
			*dst2++ = *src2++;
	}
	return (dst);
}
