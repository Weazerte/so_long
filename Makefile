# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 14:03:36 by eaubry            #+#    #+#              #
#    Updated: 2023/02/21 11:26:00 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_fill_map.c \
 			ft_check_map.c \
			ft_check_collectables.c \
			ft_check_exit.c \
			ft_check_path.c \
			ft_check_spawn.c \
			ft_is_one.c \
			ft_is_rect.c \
			ft_len.c \
			ft_pars.c \
			ft_spawn_coord.c \
			ft_print_map.c \
			ft_free_map.c \
			ft_moove.c \
			ft_count_coll.c \
			ft_exit_the_game.c \
			ft_clears.c \
			ft_toff_p.c \
			ft_map_dup.c \
			ft_print_wall.c \
			ft_create_img.c \
			ft_init_img.c \
			ft_init.c \
			main.c

INC    =	so_long.h

NAME	=	so_long

OBJS	=	${SRCS:.c=.o}

CFLAGS	=    -Wall -Wextra -Werror -g

all:	${NAME}

.c.o:	${INC}
	cc ${CFLAGS} -fPIC -c $< -o ${<:.c=.o}

${NAME}:	libft/libft.a	minilibx-linux/libmlx.a	get_next_line/libget_next_line.a	printf/libprintf.a	${OBJS} 
	gcc ${OBJS} ${CFLAGS} -Llibft -lft -Lget_next_line -lget_next_line -Lminilibx-linux -Lprintf -lprintf -lmlx -lXext -lX11 -lm -o ${NAME}
	
clean:
	rm -f ${OBJS} 
	make -C libft clean
	make -C get_next_line clean
	make -C printf clean 

fclean:	clean
	rm -f ${NAME}
	make -C libft fclean
	make -C get_next_line fclean
	make -C printf fclean


re:	fclean all

.PHONY:	all clean fclean re

libft/libft.a:
	make -C libft

get_next_line/libget_next_line.a:
	make -C get_next_line

minilibx-linux/libmlx.a:
	make -C minilibx-linux

printf/libprintf.a:
	make -C printf
