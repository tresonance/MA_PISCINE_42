/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:53:17 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/14 15:40:46 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_find_base(char c, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (c == base[count])
			return (count);
		count++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	n;
	int sign;

	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	n = 0;
	while (*str != '\0')
	{
		n *= ft_strlen(base);
		if (ft_find_base(*str, base) == -1)
			return (0);
		n += (ft_find_base(*str, base));
		str++;
	}
	return (n * sign);
}

void	ft_len_n(int *j, int *i, char *base_to, int n)
{
	while (n / *j > ft_strlen(base_to) - 1)
	{
		*j *= ft_strlen(base_to);
		(*i)++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		j;
	char	*res;
	int		i;

	j = 1;
	i = 0;
	n = ft_atoi_base(nbr, base_from);
	ft_len_n(&j, &i, base_to, n);
	res = (char*)malloc(sizeof(char) * (i + ((n < 0) ? 1 : 0)));
	i = (n < 0) ? 1 : 0;
	res[0] = '-';
	j = (n < 0) ? j * ft_strlen(base_to) : j;
	n = (n < 0) ? -n : n;
	while (j > 0)
	{
		res[i] = base_to[(n / j) % ft_strlen(base_to)];
		j /= ft_strlen(base_to);
		i++;
	}
	res[i] = '\0';
	return (res);
}
