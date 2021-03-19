# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asorrent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 13:29:36 by asorrent          #+#    #+#              #
#    Updated: 2021/03/19 17:05:57 by asorrent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC = ft_id_ini.c ft_id_ini2.c ft_itoa_pos.c ft_itoh.c \
ft_mv_cur.c ft_num_star.c ft_printf.c \
ft_putchar.c ft_putstr.c ft_putstr_len.c ft_sorter.c \
ft_switch.c ft_test_neg.c ft_uppstr.c ft_writer_c.c \
ft_writer_d_i.c ft_writer_d_i_left.c ft_writer_p.c ft_writer_s.c \
ft_writer_u.c ft_writer_x_X.c ft_writer_z_sp.c \

OBJ = $(SRC:.c=.o)

.c.o:
		gcc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
			$(MAKE) -C ./libft
			cp libft/libft.a $(NAME)
			ar rcs $(NAME) $(OBJ)

all:	$(NAME)
clean:	
		$(MAKE) clean -C ./libft
		rm -rf $(OBJ)

fclean:	clean
		$(MAKE) fclean -C ./libft
		rm -rf $(NAME)

re:		fclean all

.PHONY : all fclean clean re
