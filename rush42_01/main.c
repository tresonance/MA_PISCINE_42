/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 14:12:39 by tmillet           #+#    #+#             */
/*   Updated: 2016/07/17 15:52:24 by jorobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int **tab;

	if (argc == 10)
	{
		if (is_valid(argc, argv) == -1)
		{
			ft_putstr("Erreur\n");
			return (0);
		}
		tab = ft_array();
		tab = ft_load_array(tab, argv);
		if (sudoku_solver(tab))
		{
			ft_print_tab(tab);
			ft_putchar('\n');
		}
		else
		{
			ft_putstr("Erreur\n");
			destroy_tab(tab);
		}
	}
	else
		ft_putstr("Erreur\n");
}
