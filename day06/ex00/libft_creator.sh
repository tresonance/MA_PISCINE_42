# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/13 01:28:24 by ibtraore          #+#    #+#              #
#    Updated: 2016/07/13 18:19:39 by ibtraore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/sh 

gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_swap.c ft_strlen.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o
ranlib libft.a
rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o
