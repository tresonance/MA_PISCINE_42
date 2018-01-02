# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 03:07:40 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/24 06:24:13 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = basic.c\
	   colles_array.c\
	   string.c\
	   print_line.c\
	   parse_input.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		@rm -rf $(OBJS)

fclean: clean
		@rm -rf $(NAME)

re: fclean all


