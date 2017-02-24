# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/19 04:56:53 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/19 15:18:13 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/operation.c \
	   srcs/do_op.c \
	   srcs/ft_putnbr.c \
	   srcs/ft_atoi.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean :
	rm -rf $(OBJS)


fclean : clean
	rm -rf $(NAME)

re : fclean all 

