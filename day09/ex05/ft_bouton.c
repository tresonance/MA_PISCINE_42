/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 23:01:48 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/15 00:01:14 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if (k >= j && k >= i)
	{
		if (j >= i)
			return (j);
		else
			return (i);
	}
	if (j >= k && j >= i)
	{
		if (k >= i)
			return (k);
		else
			return (i);
	}
	if (i >= k && i >= j)
	{
		if (j >= k)
			return (j);
		else
			return (k);
	}
	return (i);
}
