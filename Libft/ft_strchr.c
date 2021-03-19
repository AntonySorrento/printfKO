/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:33:40 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/08 07:41:04 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	a;

	str = (char*)s;
	a = (char)c;
	if (a == 0)
	{
		while (*str)
			str++;
		return (str);
	}
	else
		while (*str)
		{
			if (*str == a)
				return (str);
			else
				str++;
		}
	return (NULL);
}
