# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 14:44:33 by eaubry            #+#    #+#              #
#    Updated: 2023/02/04 17:06:56 by eaubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =	get_next_line.c get_next_line_utils.c

INC    =	get_next_line.h

NAME    =	libget_next_line.a

OBJS    =	${SRCS:.c=.o}

CFLAGS    =    -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	cc ${CFLAGS} -fPIC -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
	ar rcs ${NAME} ${OBJS} ${INC}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o get_next_line.so $(OBJ)
