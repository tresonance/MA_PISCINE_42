/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 15:23:04 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/10 14:43:20 by mrajaona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	colle(int x, int y);

int		main(void)
{
	colle(5, 3);
	ft_putchar('\n');
	colle(5, 1);
	ft_putchar('\n');
	colle(1, 1);
	ft_putchar('\n');
	colle(1, 5);
	ft_putchar('\n');
	colle(4, 4);
	return (0);
}
