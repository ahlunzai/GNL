/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 05:29:56 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/22 17:16:24 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenint(int n)
{
	int		i;

	i = 2;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*string;
	int		lenstr;
	long	i;

	i = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	lenstr = lenint(n);
	if (!(string = (char *)malloc(sizeof(char) * (lenstr))))
		return (NULL);
	if (n < 0)
		n *= -1;
	string[--lenstr] = '\0';
	while ((--lenstr) >= 0)
	{
		string[lenstr] = n % 10 + '0';
		n /= 10;
	}
	if (i < 0)
		*string = '-';
	return (string);
}
