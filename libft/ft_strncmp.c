/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:39:35 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/22 14:38:29 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*v1;
	unsigned char	*v2;

	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	i = 0;
	while (v1[i] && v2[i] && v1[i] == v2[i] && i < n)
		i++;
	if (i == n && v1[i - 1] == v2[i - 1])
		return (0);
	return (v1[i] - v2[i]);
}
