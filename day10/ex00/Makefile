# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 15:35:08 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/19 07:53:11 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = srcs/
HEADER = includes/
FLAG = -Wall -Wextra -Weror
OPTION = -c -I  $(HEADER)
SRCS = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
	$(PATH_SRC)ft_swap.c  $(PATH_SRC)ft_strlen.c

OBJ =$(SRCS:.c=.o)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
all: $(NAME)

clean:
	/bin/rm  -rf $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all




