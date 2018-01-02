/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 18:35:54 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/24 16:49:45 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_characters(char left, char middle, char right, int x)
{
	int		i;

	i = 0;
	ft_putchar(left);
	while (i++ < x - 2)
		ft_putchar(middle);
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

char	*get_characters(char left, char middle, char right, int x)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	tab = (char*)malloc((x + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	tab[j++] = left;
	while (i++ < x - 2)
		tab[j++] = middle;
	if (x > 1)
		tab[j++] = right;
	tab[j] = '\0';
	return (tab);
}

void	display_result(char *str, int colle_number, int x, int y)
{
	ft_putstr(str);
	if (colle_number >= 0 && colle_number <= 9)
	{
		ft_putchar('0');
		ft_putchar(colle_number + '0');
	}
	else
		ft_putnbr(colle_number);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	display_error(void)
{
	ft_putstr("Aucune");
}
