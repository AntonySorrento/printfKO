/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_d_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:33:48 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 11:22:34 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_writer_d_i_left(t_id *id, int num)
{
	char	*str;
	int		len;
	int		neg;

	neg = ft_test_neg(num);
	str = ft_itoa_pos(num);
	len = (int)ft_strlen(str);
	if (neg == 1)
		ft_putchar('-');
	if (id->pre > len)
		ft_writer_z_sp(id->pre, len, 1);
	if (id->pre == 0 && num == 0)
		str[0] = ' ';
	ft_putstr(str);
	free(str);
	if (id->pre > len)
		ft_writer_z_sp(id->wid, (id->pre + neg), 0);
	else
		ft_writer_z_sp(id->wid, (len + neg), 0);
}
