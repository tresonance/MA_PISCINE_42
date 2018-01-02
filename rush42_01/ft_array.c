/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 07:12:04 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/17 15:42:29 by jorobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h>

int		**ft_array(void)
{
	int **tab;
	int i;
	int j;

	i = 0;
	j = 0;
	tab = (int**)malloc(9 * sizeof(int*));
	if (tab == ((void*)0))
		return ((void*)0);
	while (j < 9)
	{
		tab[j] = (int*)malloc(9 * sizeof(int));
		j++;
	}
	return (tab);
}

int		**ft_load_array(int **tab, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (ft_is_digit(argv[i][j]) == TRUE)
				tab[i - 1][j] = argv[i][j] - '0';
			else if (argv[i][j] == '.')
				tab[i - 1][j] = 0;
			else
				return (NULL);
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_print_tab(int **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(tab[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		if (i < 8)
			ft_putchar('\n');
		i++;
	}
}
