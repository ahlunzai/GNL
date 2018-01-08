/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:44:47 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/23 00:15:25 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define ABS(Value) ((Value) > 0 ? Value : - (Value))

int		ft_atoi(const char *str)
{
	int		i;
	int		signe;
	int		nombre;

	i = 0;
	nombre = 0;
	signe = 1;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	while (str[i] == '0')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nombre = nombre * 10;
		nombre = nombre + str[i] - '0';
		i++;
	}
	return (nombre * signe);
}
