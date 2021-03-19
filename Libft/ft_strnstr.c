/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 08:15:53 by asorrent          #+#    #+#             */
/*   Updated: 2021/01/23 16:36:07 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;
	char		*tofind;

	str = (char *)haystack;
	tofind = (char *)needle;
	i = 0;
	if (tofind[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == tofind[j] && (i + j) < len)
		{
			j++;
			if (!tofind[j])
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
