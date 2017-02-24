/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 04:59:21 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:26:26 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_tail(int argc, char **argv)
{
	int		i;
	int		end;
	int		in;

	i = 3;
	in = 0;
	end = ft_atoi(argv[2]);
	while (argv[i])
	{
		if (argc > 4)
		{
			if (in++)
				ft_putchar('\n');
			ft_putstr("==> ");
			ft_putstr(argv[i]);
			ft_putstr(" <==\n");
		}
		ft_display_tail(argv[i], end);
		i++;
	}
}
