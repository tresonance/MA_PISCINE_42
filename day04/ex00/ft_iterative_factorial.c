/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 23:27:32 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/09 01:09:23 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = nb;
	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (i >= 1)
		{
			result *= i;
			i--;
		}
		return (result);
	}
	return (0);
}
