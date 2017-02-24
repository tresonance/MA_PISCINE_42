/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 13:59:36 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/06 15:59:24 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printnum(int i, int j)
{
	ft_putchar((i / 10) + '0');
	ft_putchar((i % 10) + '0');
	ft_putchar(' ');
	ft_putchar((j / 10) + '0');
	ft_putchar((j % 10) + '0');
	if (i != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
				ft_printnum(i, j);
			j++;
		}
		i++;
	}
}
