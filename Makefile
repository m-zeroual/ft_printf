# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:04:17 by mzeroual          #+#    #+#              #
#    Updated: 2022/10/18 11:22:15 by mzeroual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_hexadicimal.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_unsigned.c ft_printf.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJS}
			ar rcs ${NAME} ${OBJS}
%.o:%.c
	${CC} ${CFLAGS} -c $^

clean:
	${RM}  ${OBJS}

fclean : clean
	${RM}  ${NAME}

re: fclean all

