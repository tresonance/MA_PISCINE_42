# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 18:58:45 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/21 19:19:48 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_display.c \
	   srcs/ft_cat.c \
	   srcs/main.c \

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_display.o \
	  ft_cat.o \
	  main.o \

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAG) $(SRCS) -c
	@gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
