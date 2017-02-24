# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/26 11:25:57 by brel-baz          #+#    #+#              #
#    Updated: 2016/07/27 22:01:07 by brel-baz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC =	src/main.c\
		src/check_file.c\
		src/check_file2.c\
		src/bsq_solver.c\
		src/basic.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
