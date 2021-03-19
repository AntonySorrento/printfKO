/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 08:29:33 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 17:43:02 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_u(t_id *id, unsigned int num)
{
	char	*str;
	int		len;

	str = ft_itoa_pos(num);
	len = (int)ft_strlen(str);
	if (len < id->pre && id->z_left == 0)
		ft_writer_z_sp(id->wid, id->pre, 0);
	else if (id->z_left == 0 )
		ft_writer_z_sp(id->wid, len, 0);
	if (id->z_left == '0' && id->wid >= id->pre && id->pre >= 0)
		ft_writer_z_sp(id->pre, len, 1);
	else if (id->z_left == '0')
		ft_writer_z_sp(id->wid, len, 1);
	if (id->pre > len)
		ft_writer_z_sp(id->pre, len, 1);
	if (id->pre == 0 && num == 0)
		str[0] = ' ';
	ft_putstr(str);
	free(str);
	if (id->z_left == '-' && len < id->pre)
		ft_writer_z_sp(id->wid, (id->pre), 0);
	else if (id->z_left == '-')
		ft_writer_z_sp(id->wid, (len), 0);
}
