/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:47:59 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/17 15:45:01 by jorobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		sudoku_solver(int **tab)
{
	int i;
	int j;
	int number;

	i = 0;
	j = 0;
	number = 1;
	if (!is_empty(tab, &i, &j))
		return (TRUE);
	while (number <= 9)
	{
		if (!ft_all_check(tab, i, j, number))
		{
			tab[i][j] = number;
			if (sudoku_solver(tab))
				return (TRUE);
		}
		number++;
	}
	tab[i][j] = 0;
	return (FALSE);
}

void	destroy_tab(int **tab)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
