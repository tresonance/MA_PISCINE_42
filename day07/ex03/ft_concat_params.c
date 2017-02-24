/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:05:34 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/14 15:39:50 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(int argc, char **argv)
{
	int		i;
	int		j;
	int		total_size;

	i = 1;
	total_size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			total_size++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		total_size += argc - 2;
	return (total_size);
}

char	*ft_concat_params(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	int		total_size;
	char	*str;

	total_size = get_size(argc, argv);
	str = (char*)malloc(sizeof(*str) * (total_size + 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
