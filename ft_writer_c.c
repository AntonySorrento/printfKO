/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:25:56 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 11:12:45 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_c(t_id *id, int c)
{
	if (id->z_left == '-')
		ft_putchar(c);
	if (id->wid > 1)
		ft_writer_z_sp(id->wid, 1, 0);
	if (id->z_left != '-')
		ft_putchar(c);
}
