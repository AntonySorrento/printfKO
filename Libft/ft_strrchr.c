/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:22:34 by asorrent          #+#    #+#             */
/*   Updated: 2021/01/22 17:36:47 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	a;
	int		i;

	str = (char*)s;
	a = (char)c;
	i = 0;
	while (str[i])
		i++;
	if (a == 0)
		return (&str[i]);
	else
		while (i >= 0)
		{
			if (str[i] == a)
				return (&str[i]);
			else
				i--;
		}
	return (NULL);
}
