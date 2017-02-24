/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 13:28:23 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/12 13:30:10 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int		ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

int		ft_search(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != c)
	{
		i++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		l_base;
	int		l_str;
	int		i;
	int		res;
	int		sign;

	i = 0;
	res = 0;
	l_str = ft_strlen(str) - 1;
	l_base = ft_strlen(base);
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i])
	{
		res = res + ft_power(l_base, l_str--) * ft_search(base, str[i++]);
	}
	return (sign * res);
}
