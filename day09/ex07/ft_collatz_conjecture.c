/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 04:52:40 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/15 05:18:08 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_temps(unsigned int base, unsigned int *count)
{
	if (base != 1)
	{
		if (base % 2)
		{
			*count += 1;
			return (ft_temps((3 * base + 1), count));
		}
		else
		{
			*count += 1;
			return (ft_temps((base / 2), count));
		}
	}
	return (*count);
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int counter;

	counter = ft_temps(base, &counter);
	return (counter);
}
