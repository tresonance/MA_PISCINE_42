/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sasta.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 07:03:21 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/09 05:24:23 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	sastantua(int size);

int		ft_atoi(char *str)
{
	int i;
	int continu;
	int result;

	i = 0;
	continu = 1;
	result = 0;
	if (str[i] == '+')
		i++;
	while (str[i] && continu)
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			continu = 0;
		i++;
	}
	return (result);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main (int argc, char *argv[])
{
	int size;

	if (argc == 2)
	{
		size = ft_atoi(argv[1]);
		if (0 >= size || size > 10)
			return (0);
		ft_putstr("			-----------S A S T A N T U A --------------\n");
		ft_putstr("			----->> Architect: TRAORE Ibrahima  Ecole42 <<----\n\n");
		sastantua(size);
		ft_putstr("\n\nTRAORE from school 42\n");
	}
	return (0);
}
