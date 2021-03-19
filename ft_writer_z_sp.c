/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:11:46 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 11:09:10 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_z_sp(int wid, int len, int zero)
{
	int		i;

	i = 0;
	while (i < (wid - len))
	{
		if (zero == 0)
			ft_putchar(' ');
		if (zero == 1)
			ft_putchar('0');
		i++;
	}
}
