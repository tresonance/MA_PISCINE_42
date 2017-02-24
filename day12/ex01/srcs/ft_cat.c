/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 03:40:32 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:20:07 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_cat(int argc, char **argv)
{
	int		i;
	char	c;

	i = 1;
	c = 0;
	if (argc == 1)
	{
		while (read(0, &c, 1))
			ft_putchar(c);
	}
	else
	{
		while (argc-- > 1)
		{
			if (open(argv[i], O_RDONLY) == -1)
			{
				ft_putstr("cat: ");
				ft_putstr(argv[i++]);
				ft_putstr(": No such file or directory\n");
			}
			else
				ft_display(argv[i++]);
		}
	}
}
