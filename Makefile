# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wasdisa <wasdisa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 04:47:20 by wasdisa           #+#    #+#              #
#    Updated: 2022/03/28 04:47:22 by wasdisa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c ft_printf_utils_num.c ft_printf_utils_others.c ft_printf_utils.c\

OBJS		=	${SRCS:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

NAME = 		libftprintf.a

all:		${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}
