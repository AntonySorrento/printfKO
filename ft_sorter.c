/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 06:43:45 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 12:02:24 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_sorter(t_id *id, const char *str, int i, va_list args)
{
	if (str[++i] == '0' || str[i] == '-')
	{
		id->z_left = str[i];
		i++;
	}
	if ((str[i] >= '0' && str[i] <= '9') || str[i] == '*')
		id->wid = ft_num_star(str, i, args);
	if (id->wid < 0)
	{
		id->z_left = '-';
		id->wid = -id->wid;
	}
	i = ft_mv_cur(str, i);
	if (str[i] == '.')
	{
		i++;
		id->pre = ft_num_star(str, i, args);
		i = ft_mv_cur(str, i);
		if (id->z_left == '0')
			id->z_left = 0;
	}
	if (ft_strchr("cspdiuxX%", (int)str[i]))
		id->spe = str[i];
	id->cur = ++i;
}
