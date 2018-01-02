/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 14:07:17 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/24 10:50:58 by ggaudin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	colle04(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 0;
		print_characters('A', 'B', 'C', x);
		while (i++ < (y - 2))
			print_characters('B', ' ', 'B', x);
		if (y > 1)
			print_characters('C', 'B', 'A', x);
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
			colle04(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
