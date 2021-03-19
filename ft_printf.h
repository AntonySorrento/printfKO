/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 08:26:30 by asorrent          #+#    #+#             */
/*   Updated: 2021/03/19 12:02:21 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h> // à supprimer
# include <string.h>
# include "./Libft/libft.h"

typedef struct s_id
{
	char		z_left; // ini à '\0' puis '0' si zéro et '-' si left
	int			wid;
	int			pre; // initialisé à -1 puis 0 si point sans chiffre
	char		spe;
	int			cur;
}				t_id;

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_ccmp(char c, const char *str);
void	ft_sorter(t_id *id, const char *str, int i, va_list args);
int		ft_num_star(const char *str, int i, va_list args);
int		ft_mv_cur(const char *str, int i);
void	ft_id_ini(t_id *id);
void	ft_id_ini2(t_id *id);
void	ft_switch(t_id *id, va_list args);
void	ft_writer_z_sp(int wid, int len, int zero);
void	ft_writer_s(t_id *id, char *str);
void	ft_writer_c(t_id *id, int c); 
void	ft_writer_d_i(t_id *id, int num); 
void	ft_writer_d_i_left(t_id *id, int num);
void	ft_writer_u(t_id *id, unsigned int num);
void	ft_writer_x_X(t_id *id, unsigned int num);
void	ft_writer_p(t_id *id, unsigned long long ad);
int		ft_test_neg(int num);
char	*ft_itoa_pos(int num);
char	*ft_itoh(unsigned long long num);
void	ft_putstr_len(char *str, int len);
char	*ft_uppstr(char *str);

#endif
