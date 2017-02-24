/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 03:45:32 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/16 05:12:04 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	my_putnbr(int nbr)
{
	if (nbr >= 0)
	{
		if (nbr >= 0 && nbr <= 9)
			ft_putchar(nbr + '0');
		else
		{
			my_putnbr(nbr / 10);
			ft_putchar((nbr % 10) + '0');
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		my_putnbr(par[i].size_param);
		ft_putchar('\n');
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}
