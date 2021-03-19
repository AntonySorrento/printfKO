/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 08:13:05 by asorrent          #+#    #+#             */
/*   Updated: 2021/01/23 15:10:20 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	nb;
	long			s;
	long			i;

	nb = 0;
	s = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s = -s;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((nb > 2147483647 && s == 1) || (nb > 2147483648 && s == -1))
			return (0);
		else
			nb = nb * 10 + (str[i++] - 48);
	}
	if (nb == 2147483648 && s == 1)
		return (0);
	nb = s * nb;
	return (nb);
}
