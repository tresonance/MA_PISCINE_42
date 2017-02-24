# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 04:41:12 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/21 19:22:22 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_atoi.c \
	   srcs/ft_display_tail.c \
	   srcs/ft_tail.c \
	   srcs/main.c \

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_atoi.o \
	  ft_display_tail.o \
	  ft_tail.o \
	  main.o \

FLAG = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME):
	@gcc $(FLAG) $(SRCS) -c
	@gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: all clean
