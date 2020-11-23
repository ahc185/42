# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asenouci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/21 15:01:16 by asenouci          #+#    #+#              #
#    Updated: 2020/07/21 15:01:19 by asenouci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc

CFLAGS= -Wall -Werror -Wextra

NAME=do-op

SRC		= main.c \
		  ft_check.c \
		  ft_plus.c \
		  ft_minus.c \
		  ft_mod.c \
		  ft_multi.c \
		  ft_div.c \
		  ft_putnbr.c \
		  ft_putstr.c \
		  ft_atoi.c 

OBJ= $(SRC:.c=.o)

all: $(NAME)

do-op: $(OBJ)
	$(CC) -o $@ $^

mainn.o: main.h
	${CC} -o ${OBJ} -c $< ${CFLAGS}

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
