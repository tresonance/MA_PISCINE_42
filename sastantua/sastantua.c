/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 05:17:46 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/11 08:04:53 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_floor;
int		g_j;

void	ft_putchar(char c);

void	print_space(int space)
{
	int i;

	i = 0;
	while (i++ < space)
		ft_putchar(' ');
	ft_putchar('/');
}

void	print_line(int *space, int *s, int sz, int l)
{
	int i;
	int k;

	i = 0;
	g_j = (*s / 2) - (sz / 2);
	k = (*s / 2) + (sz / 2) + 1;
	print_space(*space);
	while (i++ < (*s))
	{
		if (g_floor == sz)
		{
			if ((l + 1 == (sz + 2) - sz / 2) && (i - 1 == k - 2) && (sz > 4))
				ft_putchar('$');
			else if (((sz == 1) && i - 1 == 2 && (l >= 1 + sz)) || ((sz == 2)
				&& i - 1 == 8 && (l >= 1 + sz)) || ((sz == 3) && (i - 1 >= g_j)
				&& (i - 1 < k) && (l + 1 >= sz)) || ((sz == 4) && (i - 1 > g_j)
				&& (i - 1 < k - 1) && (l + 1 >= sz)) || ((sz > 4)
				&& (i - 1 >= g_j) && (i - 1 < k) && (l + 1 > 2)))
				ft_putchar('|');
			else
				ft_putchar('*');
		}
		else
			ft_putchar('*');
	}
}

void	print_floor(int *space, int *star, int size, int *line)
{
	int i;
	int t[2];

	t[0] = 4;
	t[1] = 2;
	while (g_floor <= size && (*star += t[0]) && (*space -= t[1]))
	{
		i = -1;
		while (i++ < (*line) - 1)
		{
			print_line(space, star, size, i);
			ft_putchar('\\');
			//if (size >= size + 2)
				ft_putchar('\n');
			(*space)--;
			(*star) += 2;
		}
		g_floor++;
		if ((*line = (*line) + 1) && (g_floor % 2 == 0))
		{
			t[0] += 2;
			t[1]++;
		}
	}
}

void	sastantua(int size)
{
	int space;
	int star;
	int line;

	if (size <= 0)
		return ;
	star = -3;
	space = size * (size + 4);
	line = 3;
	g_floor = 1;
	print_floor(&space, &star, size, &line);
}
