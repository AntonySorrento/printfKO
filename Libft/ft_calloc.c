/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 07:04:45 by asorrent          #+#    #+#             */
/*   Updated: 2021/01/27 07:08:27 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		mem;

	mem = count * size;
	if ((ptr = malloc(mem)) == NULL)
		return (NULL);
	ft_bzero(ptr, mem);
	return (ptr);
}
