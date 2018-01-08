/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 02:18:08 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 03:54:27 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		taille;
	int		i;

	i = 0;
	taille = ft_strlen(s1);
	while (s2[i])
	{
		s1[taille + i] = s2[i];
		i++;
	}
	s1[taille + i] = '\0';
	return (s1);
}
