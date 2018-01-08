/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 23:12:45 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 02:54:13 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	if (len == 0)
		return (b);
	a = (unsigned char *)b;
	while (len > 0)
	{
		a[len - 1] = c;
		len--;
	}
	return (a);
}
