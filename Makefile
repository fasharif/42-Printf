# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fasharif <fasharif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 17:46:27 by fasharif          #+#    #+#              #
#    Updated: 2022/08/12 17:56:17 by fasharif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
cc = gcc
CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_itoa.c ft_puthex.c

OBJS = $(SRCS:.c=.o)

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}
all:	${NAME}
clean:
		${RM} ${OBJS} ${OBJSBONUS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all