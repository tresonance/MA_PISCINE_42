/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:32:36 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/12 16:31:58 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

int			ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int			my_ft_strchr(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int			base_test(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (-1);
	while (base[i])
	{
		j = 0;
		if ((base[i] < 'a' || base[i] > 'z') && (base[i] < 'A' || base[i] > 'Z')
				&& (base[i] < '0' || base[i] > '9'))
			return (-1);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	char	tab[35];
	int		i;

	i = 0;
	if (-1 == base_test(base))
		return ;
	while (i < 35)
		tab[i++] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	while (nbr >= ft_strlen(base))
	{
		tab[i++] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
	}
	tab[i] = base[nbr];
	while (i >= 0)
		ft_putchar(tab[i--]);
}
