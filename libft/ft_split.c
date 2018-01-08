/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:31:48 by gsysaath          #+#    #+#             */
/*   Updated: 2017/11/24 00:34:48 by gsysaath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_include(char a, char *charset)
{
	while (*charset)
	{
		if (a == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int		nbremots(char *str, char *charset)
{
	int i;

	i = 0;
	while (*str)
	{
		while (*str && check_include(*str, charset))
			str++;
		if (*str)
			i++;
		while (*str && !check_include(*str, charset))
			str++;
	}
	return (i);
}

static char		**ft_split2(char *str, char *charset, char **tab)
{
	int		i;
	int		j;
	int		taille;

	i = -1;
	while (*str)
	{
		while (*str && check_include(*str, charset))
			str++;
		if (!*str)
			break ;
		j = -1;
		taille = 0;
		while (str[++j] && !check_include(str[j], charset))
			taille++;
		if (!(tab[++i] = malloc(sizeof(char) * (taille + 1))))
			return (NULL);
		j = -1;
		while (++j < taille)
			tab[i][j] = *str++;
		tab[i][j] = '\0';
	}
	tab[++i] = 0;
	return (tab);
}

char			**ft_split(char *str, char *charset)
{
	char	**tab;

	if (!(tab = (char**)malloc(sizeof(char*) * (nbremots(str, charset) + 1))))
		return (NULL);
	return (ft_split2(str, charset, tab));
}
