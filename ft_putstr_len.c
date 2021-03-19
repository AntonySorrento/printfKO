/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 06:59:59 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 17:39:07 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_len(char *str, int len)
{
	int	i;

	i = 0;
	while (i < len && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
