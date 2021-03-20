/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_star.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 07:20:43 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 11:52:30 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

va_list	ft_num_star(t_id *id, const char *str, va_list args)
{
	int	num;
	int i;

	i = id->cur;
	num = 0;
	if (str[i] == '*')
	{
		num = va_arg(args, int);
		i++;
	}
	else
	{
		num = ft_atoi(&str[i]);
		while (str[i] >= '0' && str[i] <= '9')
			i++;
	}
	if (str[id->cur - 1] == '.')
		id->pre = num;
	else 
		id->wid = num;
	id->cur = i;
	return (args);
}
