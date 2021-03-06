/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 12:32:40 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/18 16:47:18 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		ft_atoi(char *str)
{
	int i;
	int result;
	int continu;

	i = 0;
	result = 0;
	continu = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && continu)
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			continu = 0;
		i++;
	}
	if (str[0] == '-')
		result *= -1;
	return (result);
}
