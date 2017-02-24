/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:12:48 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/19 18:13:41 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	test;
	int	tmp;

	test = 0;
	while (--length > 0)
	{
		tmp = f(tab[length - 1], tab[length]);
		if (tmp)
		{
			if (!test && tmp)
				test = tmp > 0 ? 1 : -1;
			if ((tmp > 0 && test == -1) || (tmp < 0 && test == 1))
				return (0);
		}
	}
	return (1);
}
