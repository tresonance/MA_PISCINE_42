/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrajaona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 14:26:47 by mrajaona          #+#    #+#             */
/*   Updated: 2016/07/09 15:28:06 by mrajaona         ###   ########.fr       */
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
	ft_print_line('A', 'B', 'C', x);
	while (i++ < y - 1)
		ft_print_line('B', ' ', 'B', x);
	if (y > 1)
		ft_print_line('A', 'B', 'C', x);
}
