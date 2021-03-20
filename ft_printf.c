/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 08:23:30 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 17:38:16 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_id	id;

	ft_id_ini(&id);
	va_start(args, str);
	while (str[id.cur])
	{
		if (str[id.cur] == '%' && str[id.cur + 1] != 0)
		{
			args = ft_sorter(&id, str, args);
			args = ft_switch(&id, args);
		}
		else
		{
			ft_putchar(str[id.cur]);
			id.cur++;
		}
	}
	va_end(args);
	return (0);
}
