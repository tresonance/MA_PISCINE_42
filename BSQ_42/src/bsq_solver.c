/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 12:39:59 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/27 22:16:30 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	print_map(char **map)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (map[a])
	{
		while (map[a][b])
		{
			ft_putchar(map[a][b]);
			b++;
		}
		b = 0;
		ft_putchar('\n');
		a++;
	}
	ft_free(map);
}

void	print_square(char **map, int x, int y, int size)
{
	int		s_y;
	int		s_x;
	int		s_y2;
	char	full;

	if (size == 0)
	{
		print_map(map);
		return ;
	}
	full = map[0][ft_strlen(map[0]) - 1];
	s_x = x + size - 1;
	s_y2 = y + size - 1;
	while (x <= s_x)
	{
		s_y = y;
		while (s_y <= s_y2)
		{
			map[x][s_y] = full;
			s_y++;
		}
		x++;
	}
	print_map(map);
}

int		search_square(char **map, int x, int y, char empty)
{
	int		size;
	int		s_y;
	int		s_x;
	int		s_y2;
	int		s_x2;

	s_x2 = x;
	s_y2 = y;
	size = 1;
	while (map[s_x2 + 1])
	{
		s_x = x;
		s_x2++;
		s_y2++;
		while (s_x <= s_x2)
		{
			s_y = y;
			while (s_y <= s_y2)
				if (map[s_x][s_y++] != empty)
					return (size);
			s_x++;
		}
		size++;
	}
	return (size);
}

int		map_resolve(char **map, int x, int c, int e)
{
	int		y;
	int		s_x;
	int		s_y;
	char	empty;

	empty = map[0][ft_strlen(map[0]) - 3];
	while (map[++x])
	{
		y = -1;
		while (map[x][++y])
			if (map[x][y] == empty)
			{
				if ((c = search_square(map, x, y, empty)) > e)
				{
					e = c;
					s_x = x;
					s_y = y;
				}
			}
	}
	print_square(map, s_x, s_y, e);
	return (0);
}
