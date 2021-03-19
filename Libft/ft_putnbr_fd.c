/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:22:50 by asorrent          #+#    #+#             */
/*   Updated: 2021/02/06 07:34:41 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(int a, int fd)
{
	char	c;

	c = a + '0';
	write(fd, &c, 1);
}

static void	ft_putnbr_pos(int nb, int fd)
{
	int		i;
	int		chiffre_inv[11];

	i = 0;
	while (nb >= 10)
	{
		chiffre_inv[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	chiffre_inv[i] = nb;
	while (i >= 0)
	{
		ft_putchar(chiffre_inv[i], fd);
		i--;
	}
}

void		ft_putnbr_fd(int nb, int fd)
{
	if (nb == 0)
		write(fd, "0", 1);
	else if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = -nb;
		}
		ft_putnbr_pos(nb, fd);
	}
}
