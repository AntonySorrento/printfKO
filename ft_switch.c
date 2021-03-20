/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:18:03 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 17:40:21 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

va_list	ft_switch(t_id *id, va_list args)
{
	if (id->spe == 'c')
		ft_writer_c(id, va_arg(args, int));
	if (id->spe == '%')
		ft_writer_c(id, '%');
	if (id->spe == 'i' || id->spe == 'd')
	{
		if (id->z_left == '-')
			ft_writer_d_i_left(id, va_arg(args, int));
		else
			ft_writer_d_i(id, va_arg(args, int));
	}
	if (id->spe == 's')
		ft_writer_s(id, va_arg(args, char*));
	if (id->spe == 'u')
		ft_writer_u(id, (va_arg(args, unsigned int)));
	if (id->spe == 'x' || id->spe == 'X')
		ft_writer_x_X(id, (va_arg(args, unsigned int)));
	if (id->spe == 'p')
		ft_writer_p(id, (va_arg(args, unsigned long long)));
	ft_id_ini2(id);
	return (args);
}
