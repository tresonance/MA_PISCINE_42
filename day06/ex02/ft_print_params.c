/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 02:14:28 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/13 03:00:48 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc >= 1)
	{
		while (argv[i])
		{
			ft_putstr(argv[i]);
			if (i < argc - 1)
				ft_putchar('\n');
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
