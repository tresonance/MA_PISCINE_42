/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 08:29:33 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/15 08:32:32 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	 int swapc;
	 int swapd;

	 swapc = *******c;
	 swapd = ****d;
	 *******c = ***a;
	 ****d = swapc;
	 ***a = *b;
	 *b = swapd;
}
