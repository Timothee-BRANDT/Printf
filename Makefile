# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 15:11:17 by tbrandt           #+#    #+#              #
#    Updated: 2021/11/18 13:11:25 by tbrandt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FCTS = main.c ft_printf.c ft_printf_utils.c ft_printf_utils2.c

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

OBJS = ${FCTS:.c=.o}

%.o:	%.c
	gcc -c ${FLAGS} -o $@ $<

all:	${NAME}

${NAME}:${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	rm -f ${FCTS:.c=.o}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
