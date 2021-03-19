/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 09:02:17 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 11:21:14 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_d_i(t_id *id, int num)
{
	char	*str;
	int		len;
	int		neg;
	
	neg = ft_test_neg(num);
	str = ft_itoa_pos(num);
	len = (int)ft_strlen(str);
	if (len < id->pre && id->z_left == 0)
		ft_writer_z_sp(id->wid, (id->pre + neg), 0);
	else
		ft_writer_z_sp(id->wid, (len + neg), 0);
	if (neg == 1)
		ft_putchar('-');
	if (id->z_left == '0' && (id->wid >= (id->pre + neg)))
		ft_writer_z_sp(id->pre, len, 1);
	else if (id->z_left == '0')
		ft_writer_z_sp(id->wid, (len + neg), 1);
	if (id->pre > len)
		ft_writer_z_sp(id->pre, len, 1);
	if (id->pre == 0 && num == 0)
		str[0] = ' ';
	ft_putstr(str);
	free(str);
}
