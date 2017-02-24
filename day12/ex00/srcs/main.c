/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 00:51:23 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:08:24 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr("File name missing.\n");
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		if (ft_display_file(argv[1]) == 1)
			return (1);
		return (0);
	}
}
