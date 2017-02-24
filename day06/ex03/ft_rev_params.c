/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 02:38:37 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/13 06:59:56 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	if (argc >= 1)
	{
		while (i >= 1)
		{
			ft_putstr(argv[i]);
			if (i != 1)
				ft_putchar('\n');
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
