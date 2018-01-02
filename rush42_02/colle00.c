/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 14:05:15 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/24 10:42:31 by relie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	colle00(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 0;
		print_characters('o', '-', 'o', x);
		while (i++ < (y - 2))
			print_characters('|', ' ', '|', x);
		if (y > 1)
			print_characters('o', '-', 'o', x);
	}
}

int		main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		if (x > 0 && y > 0)
			colle00(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
