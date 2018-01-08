/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 05:13:19 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/21 02:55:09 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nombreentier;

	nombreentier = n;
	if (nombreentier == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
		return ;
	}
	if (nombreentier < 0)
	{
		ft_putchar('-');
		nombreentier = n * -1;
	}
	if (nombreentier > 9)
	{
		ft_putnbr(nombreentier / 10);
		ft_putnbr(nombreentier % 10);
	}
	else
	{
		ft_putchar(nombreentier + '0');
	}
}
