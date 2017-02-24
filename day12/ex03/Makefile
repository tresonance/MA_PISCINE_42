# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 05:12:46 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/21 19:28:31 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

SRCS = srcs/ft_convert_base.c srcs/ft_display.c srcs/ft_print.c \
	   srcs/ft_print_c.c srcs/ft_strrev.c srcs/hexdump.c srcs/main.c \
	   srcs/other_functions.c \

FLAG = -Wall -Wextra -Werror

OBJ = ft_convert_base.o ft_display.o ft_print.o ft_print_c.o ft_strrev.o \
	  hexdump.o main.o other_functions.o \

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(SRCS) -c
	@gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
