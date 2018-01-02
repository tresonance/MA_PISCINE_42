/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 14:06:38 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/24 10:33:27 by ggaudin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	colle02(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 0;
		print_characters('A', 'B', 'A', x);
		while (i++ < (y - 2))
			print_characters('B', ' ', 'B', x);
		if (y > 1)
			print_characters('C', 'B', 'C', x);
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
			colle02(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
