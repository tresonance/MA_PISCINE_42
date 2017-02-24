# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 13:10:55 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/19 04:43:46 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = gcc

GCCFLAGS = -Wall -Wextra -Werror 

SRCS =	srcs/ft_atoi.c\
		srcs/ft_putchar.c\
	   srcs/ft_putstr.c \
	   srcs/operation.c\
	   srcs/ft_putnbr.c\
		srcs/do_op.c\

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(GCCFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

