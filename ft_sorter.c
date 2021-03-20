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

va_list	ft_sorter(t_id *id, const char *str, va_list args)
{
	if (str[++id->cur] == '0' || str[id->cur] == '-')
	{
		id->z_left = str[id->cur];
		id->cur++;
	}
	if ((str[id->cur] >= '0' && str[id->cur] <= '9') || str[id->cur] == '*')
		args = ft_num_star(id, str, args);
	if (id->wid < 0)
	{
		id->z_left = '-';
		id->wid = -id->wid;
	}
	if (str[id->cur] == '.')
	{
		id->cur++;
		args = ft_num_star(id, str, args);
		if (id->z_left == '0')
			id->z_left = 0;
	}
	if (ft_strchr("cspdiuxX%", (int)str[id->cur]))
		id->spe = str[id->cur];
	id->cur++;
	return (args);
	printf("\nid->z_left= %c\n", id->z_left);
	printf("id->wid = %i\n", id->wid);
	printf("id->pre = %i\n", id->pre);
	printf("id->spe = %c\n", id->spe);
	printf("id->cur = %i\n", id->cur);
}
