/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:17:51 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/22 15:01:48 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ABS(Value) ((Value) < 0 ? - (Value) : (Value))

char	*ft_strtrim(char const *s)
{
	int		d;
	int		f;
	char	*res;
	int		i;

	d = 0;
	if (!(s))
		return (NULL);
	while (s[d] && (s[d] == ' ' || s[d] == '\t' || s[d] == '\n'))
		d++;
	f = ft_strlen(s) - 1;
	while ((s[f] == ' ' || s[f] == '\t' || s[f] == '\n') && f >= 0)
		f--;
	if (!(res = (char *)malloc(sizeof(char) * (ABS((f - d)) + 2))))
		return (NULL);
	i = 0;
	if (d == f || s[d] == '\0')
	{
		res[i] = '\0';
		return (res);
	}
	while (d <= f)
		res[i++] = s[d++];
	res[i] = '\0';
	return (res);
}
