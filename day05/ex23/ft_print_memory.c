/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 16:33:14 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/12 16:39:13 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int					ft_putchar(char c);

unsigned int		ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len += 1;
	return (len);
}

void				ft_putstr_(char *addr, unsigned int curr, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = curr;
	len = 0;
	while (addr[len] != '\0')
		len += 1;
	while (i < curr + 16 && addr[i] != '\0')
	{
		if ((addr[i] < ' ' || addr[i] > '~') && (addr[i]))
			ft_putchar('.');
		else
			ft_putchar(addr[i]);
		i++;
	}
	ft_putchar('\n');
}

void				display_bytes(char *addr, unsigned int curr,
		unsigned int size)
{
	unsigned int	i;

	i = curr;
	while (i < curr + 16)
	{
		if (i < ft_strlen(addr))
		{
			(addr[i] / 16) > 9 ? ft_putchar((addr[i] / 16) + 'a' - 10) :
			ft_putchar((addr[i] / 16) + '0');
			(addr[i] % 16) > 9 ? ft_putchar((addr[i] % 16) + 'a' - 10) :
			ft_putchar((addr[i] % 16) + '0');
		}
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void				ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				exp;
	int				nb;
	int				tmp;

	i = 0;
	nb = 0;
	while (i < size && i < ft_strlen((char *)addr))
	{
		exp = 10000000;
		tmp = nb;
		while (exp > 0)
		{
			ft_putchar('0' + nb / exp);
			if (nb / exp > 0)
				nb %= exp;
			exp /= 10;
		}
		ft_putchar(':');
		ft_putchar(' ');
		display_bytes((char *)addr, i, size);
		ft_putstr_((char *)addr, i, size);
		i += 16;
		nb = tmp + 10;
	}
}
