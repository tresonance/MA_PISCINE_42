/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 05:23:04 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:28:53 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ten_base(char *nbr, char *base_from)
{
	int		v_ten;
	int		l_nbr;
	int		i;
	int		j;

	l_nbr = ft_strlen(nbr);
	v_ten = 0;
	i = -1;
	while (nbr[++i])
	{
		j = -1;
		while (nbr[i] != base_from[++j])
			;
		v_ten += j * ft_power(ft_strlen(base_from), l_nbr - i - 1);
	}
	return (v_ten);
}

char		*ft_convert_base(int nbr, char *base_from, char *base_to)
{
	char	*txt;
	int		len_base;
	int		i;

	(void)base_from;
	len_base = ft_strlen(base_to);
	txt = (char*)malloc(sizeof(char) * (32));
	i = 0;
	if (nbr != '\0')
		while (nbr > 0)
		{
			txt[i] = base_to[nbr % len_base];
			nbr /= len_base;
			++i;
		}
	else
		txt[i++] = base_to[0];
	txt[i] = '\0';
	return (ft_strrev(txt));
}
