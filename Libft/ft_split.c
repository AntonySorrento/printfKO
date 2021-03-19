/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:55:25 by asorrent          #+#    #+#             */
/*   Updated: 2021/02/06 07:39:57 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_w(char const *s, char c)
{
	int		i;
	int		nb_w;

	if (c == 0)
		return (1);
	nb_w = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		nb_w++;
		while (s[i] == c)
			i++;
	}
	return (nb_w);
}

static int		trim(char const *s, char c, int i)
{
	if (c == 0)
		return (i);
	while (s[i] == c)
		i++;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		x;
	char	**lines;

	if (!s)
		return (NULL);
	if ((lines = malloc(sizeof(char *) * count_w(s, c) + 1)) == NULL)
		return (NULL);
	i = 0;
	x = -1;
	i = trim(s, c, i);
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if ((lines[++x] = ft_substr(s, i, j)) == NULL)
			return (NULL);
		i = i + j;
		i = trim(s, c, i);
	}
	lines[++x] = NULL;
	return (lines);
}
