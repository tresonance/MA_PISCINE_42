# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 00:44:19 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/21 19:02:14 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_display_file.c \
	   srcs/main.c \

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_display_file.o \
	  main.o \

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(SRCS) -c
	@gcc $(FLAF) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
