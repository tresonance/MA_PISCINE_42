/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:16:47 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/17 15:34:42 by jorobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		is_empty(int **tab, int *row, int *col)
{
	int i;
	int j;

	i = (*row);
	j = (*col);
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (TRUE);
			}
			j++;
		}
		i++;
	}
	return (FALSE);
}

int		is_in_row(int **tab, int i, int number)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (tab[i][j] == number)
			return (TRUE);
		j++;
	}
	return (FALSE);
}

int		is_in_col(int **tab, int j, int number)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][j] == number)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int		is_in_box(int **tab, int box_start_row, int box_start_col, int number)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (tab[box_start_row + i][box_start_col + j] == number)
				return (TRUE);
			j++;
		}
		i++;
	}
	return (FALSE);
}

int		ft_all_check(int **tab, int i, int j, int number)
{
	if (!is_in_row(tab, i, number) && !is_in_col(tab, j, number) &&
			!is_in_box(tab, i - i % 3, j - j % 3, number))
		return (FALSE);
	return (TRUE);
}
