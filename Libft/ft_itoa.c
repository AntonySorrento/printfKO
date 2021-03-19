/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:28:07 by asorrent          #+#    #+#             */
/*   Updated: 2021/02/06 07:38:53 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_c(int n)
{
	int		nb_c;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	nb_c = n < 0 ? 1 : 0;
	n = n < 0 ? -n : n;
	while (n > 0)
	{
		n = n / 10;
		nb_c++;
	}
	return (nb_c);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;

	if ((str = malloc(sizeof(char) * count_c(n) + 1)) == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n == 0)
		return (ft_strcpy(str, "0"));
	i = count_c(n);
	n = n < 0 ? -n : n;
	str[0] = '-';
	str[i] = 0;
	while (n > 0)
	{
		str[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
