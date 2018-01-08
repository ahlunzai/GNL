/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:08:02 by gsysaath          #+#    #+#             */
/*   Updated: 2017/12/14 04:00:33 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*r;

	if (!s1 && !s2)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(s2));
	if (*s2 == '\0')
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(r = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	while (*s1)
		r[i++] = *s1++;
	while (*s2)
		r[i++] = *s2++;
	r[i] = '\0';
	return (r);
}
