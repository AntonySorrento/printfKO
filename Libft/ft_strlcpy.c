/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 06:48:46 by asorrent          #+#    #+#             */
/*   Updated: 2021/01/29 09:19:20 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	unsigned int i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (destsize > 0)
	{
		destsize--;
		while (destsize > 0 && src[i])
		{
			destsize--;
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
