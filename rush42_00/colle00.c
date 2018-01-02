/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 14:29:33 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/09 15:13:33 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_line(char left, char middle, char right, int x)
{
	int i;

	i = 1;
	ft_putchar(left);
	while (i++ < x - 1)
		ft_putchar(middle);
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	ft_print_line('o', '-', 'o', x);
	while (i++ < y - 1)
		ft_print_line('|', ' ', '|', x);
	if (y > 1)
		ft_print_line('o', '-', 'o', x);
}
