/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 08:25:05 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 17:42:11 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_p(t_id *id, unsigned long long ad)
{
	char	*str;
	int		len;

	str = ft_itoh(ad);
	len = (int)ft_strlen(str) + 2;
	if (len < id->pre && id->z_left == 0)
		ft_writer_z_sp(id->wid, id->pre, 0);
	else if (id->z_left == 0)
		ft_writer_z_sp(id->wid, len, 0);
	if (id->z_left == '0' && id->wid >= id->pre && id->pre >= 0)
		ft_writer_z_sp(id->pre, len, 1);
	else if (id->z_left == '0')
		ft_writer_z_sp(id->wid, len, 1);
	if (id->pre > len)
		ft_writer_z_sp(id->pre, len, 1);
	ft_putstr("0x");
	ft_putstr(str);
	free(str);
	if (id->z_left == '-' && len < id->pre)
		ft_writer_z_sp(id->wid, (id->pre), 0);
	else if (id->z_left == '-')
		ft_writer_z_sp(id->wid, (len), 0);
}
