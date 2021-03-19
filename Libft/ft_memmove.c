/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:54:29 by asorrent          #+#    #+#             */
/*   Updated: 2021/01/25 07:47:58 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (!src1 && !dst1)
		return (NULL);
	if (dst1 > src1)
	{
		while (len)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	else
	{
		while (++i < (len + 1))
			dst1[i - 1] = src1[i - 1];
	}
	return (dst);
}
