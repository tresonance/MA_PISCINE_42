/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 18:53:40 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/14 19:58:40 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour > 12)
		hour = hour % 12;
	else if (hour == 0)
		hour = 12;
	else if (hour == 11)
		printf(" 11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf(" 11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24)
		printf(" 12.00 A.M. AND 1.00 A.M.\n");
	else if (hour < 11)
		printf(" %d.00 A.M. AND %d.00 A.M.\n", hour, (hour + 1) % 12);
	else
		printf(" %d.00 P.M. AND %d.00 P.M.\n", hour, (hour + 1) % 12);
}
