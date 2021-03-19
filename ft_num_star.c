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

int	ft_num_star(const char *str, int i, va_list args)
{
	int	num;

	num = 0;
	if (str[i] == '*')
		num = va_arg(args, int);
	else
		num = ft_atoi(&str[i]);
	return (num);
}
