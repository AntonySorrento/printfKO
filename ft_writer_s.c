/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 07:01:25 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 11:12:15 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_s(t_id *id, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (id->pre < len && id->pre >= 0)
		len = id->pre;
	if (id->z_left != '-')
		ft_writer_z_sp(id->wid, len, 0);
	ft_putstr_len(str, len);
	if (id->z_left == '-')
		ft_writer_z_sp(id->wid, len, 0);
}
