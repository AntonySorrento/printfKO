/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:15:07 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 11:43:22 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_c(unsigned int n)
{
	int		nb_c;

	if (n == 0)
		return (1);
	nb_c = 0;
	while (n > 0)
	{
		n = n / 10;
		nb_c++;
	}
	return (nb_c);
}

char	*ft_itoa_pos(int n)
{
	char	*str;
	int		i;

	if (n < 0)
		n = -n;
	str = malloc(sizeof(char) * ft_count_c(n) + 1);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		return (ft_strcpy(str, "0"));
	i = ft_count_c(n);
	str[i] = 0;
	while (n > 0)
	{
		str[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
