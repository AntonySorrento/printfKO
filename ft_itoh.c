/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 07:05:08 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 10:47:42 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoh(unsigned long long num)
{
	char				*base;
	int					i;
	unsigned long long	cpnum;
	char				*str;

	base = "0123456789abcdef";
	i = 1;
	if (num == 0)
		i = 2;
	cpnum = num;
	while (i++ > 0 && cpnum > 0)
		cpnum = cpnum / 16;
	str = (char*)malloc((sizeof (char)) * i);
	if (str == NULL)
		return (NULL);
	i = i - 2;
	str[i--] = 0;
	while (i >= 0)
	{
		str[i] = base[num % 16];
		num = num / 16;
		i--;
	}
	return (str);
}
