/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:32:36 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/11 12:49:28 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
		return (0);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		my_ft_strchr(char *base, char c)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		base_test(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	if (!base || !*base || (ft_strlen(base) == 1))
		return (-1);
	while (base[i])
	{
			j = 0;
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	if (-1 != my_ft_strchr(str, '-')  || my_ft_strchr(str, '+') != -1)
		return (-1);
	return (1);
}

int		my_ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb < 0)
		return(0);
	if (power == 0)
		return (1);
	return (nb * my_ft_recursive_power(nb, power - 1));
}

void 	ft_putnbr_base(int nbr, char *base)
{
	char array[100];
	char *p;
	int i;
	int resultat = 0;
	
	i = 0;
	p = array + ft_strlen(array);
	*p = '\0';
	while ((*--p = nbr % 10) && (nbr = nbr / 10))
		;
	while (p[i])
	{
		resultat += my_ft_strchr(base, p[i]) * my_ft_recursive_power(ft_strlen(base),ft_strlen(p) - 1);
		i++;
	}


}
