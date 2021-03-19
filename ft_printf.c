/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 08:23:30 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 12:02:05 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;	
	t_id	id;

	i = 0;
	ft_id_ini(&id);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != 0)
		{
			ft_sorter(&id, str, i, args);
			ft_switch(&id, args);
			i = id.cur;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (0);
}

int		main()
{
	printf("Vraie fonction = {%-*.*i} \n", 8, 4, -41);
	ft_printf("Ma fonction    = {%-*.*i} \n", 8, 4, -41);
}
