/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 16:19:51 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/07 04:25:03 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_array(int tab[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_initialize(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
}

void		ft_print_combn_(int tab[], int n, int k)
{
	int num;

	if (k == n)
		num = 0;
	else
		num = tab[n - k - 1] + 1;
	tab[n - k] = num;
	while (tab[n - k] <= 10 - k)
	{
		if (k == 1)
			ft_print_array(tab, n);
		else
			ft_print_combn_(tab, n, k - 1);
		tab[n - k]++;
	}
}

void		ft_print_combn(int n)
{
	int tab[n];
	int k;

	k = n;
	ft_initialize(tab, n);
	ft_print_combn_(tab, n, k);
}
