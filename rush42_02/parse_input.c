/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 19:49:21 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/24 23:41:04 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*read_input(int *x, int *y)
{
	int		i;
	char	c;
	char	tab[BUF_SIZE + 1];

	i = 0;
	while (read(0, &c, 1) > 0)
	{
		if (c != '\n')
			tab[i++] = c;
		if (c == '\n')
			(*y)++;
	}
	tab[i] = '\0';
	if (*y)
		*x = i / (*y);
	return (ft_strdup(tab));
}

void	message(int x, int y, int i, int *other_result)
{
	if (*other_result > 0)
		ft_putstr(" || ");
	display_result("[colle-", i, x, y);
}

void	compare(char *tab, int x, int y, int other_result)
{
	if (!ft_strcmp(tab, colle00_array(x, y)))
	{
		message(x, y, 0, &other_result);
		other_result++;
	}
	if (!ft_strcmp(tab, colle01_array(x, y)))
	{
		message(x, y, 1, &other_result);
		other_result++;
	}
	if (!ft_strcmp(tab, colle02_array(x, y)))
	{
		message(x, y, 2, &other_result);
		other_result++;
	}
	if (!ft_strcmp(tab, colle03_array(x, y)))
	{
		message(x, y, 3, &other_result);
		other_result++;
	}
	if (!ft_strcmp(tab, colle04_array(x, y)))
		message(x, y, 4, &other_result);
	else if ( other_result <= 0)
		ft_putstr("aucune");
	ft_putstr("\n");
}

int		main(void)
{
	int		x;
	int		y;
	int		z;
	char	*tab;

	x = 0;
	y = 0;
	z = 0;
	tab = read_input(&x, &y);
	compare(tab, x, y, z);
	free(tab);
	return (0);
}
