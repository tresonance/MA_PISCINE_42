/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 07:28:27 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/17 07:18:49 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		is_valid_len(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc != 10)
		return (-1);
	while (i < argc)
	{
		if (ft_strlen(argv[i]) != 9)
			return (-1);
		i++;
	}
	return (0);
}

int		is_valid_digit_number(int argc, char **argv)
{
	int i;
	int j;
	int total;

	i = 1;
	total = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > '0' && argv[i][j] <= '9')
				total++;
			j++;
		}
		i++;
	}
	if (total < 17)
		return (-1);
	return (0);
}

int		is_valid_char(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '1' || argv[i][j] > '9')
			{
				if (argv[i][j] != '.')
					return (-1);
			}
			if (argv[i][j] != '.')
			{
				if (argv[i][j] < '1' || argv[i][j] > '9')
					return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		is_valid(int argc, char **argv)
{
	if ((-1 == is_valid_len(argc, argv)) || (-1 == is_valid_char(argc, argv)) ||
			(-1 == is_valid_digit_number(argc, argv)))
		return (-1);
	return (0);
}
