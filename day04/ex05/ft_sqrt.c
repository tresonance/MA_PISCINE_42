/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 00:37:44 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/09 18:07:08 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb >= 0)
	{
		if (nb == 1)
			return (1);
		while (i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
		return (0);
	}
	return (0);
}
