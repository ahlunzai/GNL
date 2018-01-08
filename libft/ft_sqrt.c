/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 00:43:41 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/23 00:43:50 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int racine;

	racine = 1;
	while (racine <= (nb / 2))
	{
		if (nb == racine * racine)
			return (racine);
		else
			racine++;
	}
	return (0);
}
