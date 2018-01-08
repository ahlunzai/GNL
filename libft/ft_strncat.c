/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 02:36:00 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 03:54:49 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		taille;
	size_t	i;

	i = 0;
	taille = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[taille + i] = s2[i];
		i++;
	}
	s1[taille + i] = '\0';
	return (s1);
}
