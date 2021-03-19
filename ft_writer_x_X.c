/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 07:38:44 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 17:43:39 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_x_X(t_id *id, unsigned int num)
{
	char	*str;
	int		len;

	str = ft_itoh(num);
	if (id->spe == 'X')
		str = ft_uppstr(str);
	len = (int)ft_strlen(str);
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
	if (num == 0 && id->pre == 0)
		str[0] = ' ';
	ft_putstr(str);
	free(str);
	if (id->z_left == '-' && len < id->pre)
		ft_writer_z_sp(id->wid, (id->pre), 0);
	else if (id->z_left == '-')
		ft_writer_z_sp(id->wid, (len), 0);
}
