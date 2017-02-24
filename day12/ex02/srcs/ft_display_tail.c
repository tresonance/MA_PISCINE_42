/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 04:53:05 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:25:28 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		filelen(char *str)
{
	char	tmp;
	int		i;
	int		fd;

	i = 0;
	fd = open(str, O_RDONLY);
	while (read(fd, &tmp, 1))
		i++;
	close(fd);
	return (i);
}

void	ft_display_tail(char *str, int end)
{
	char	txt;
	int		fd;
	int		len;
	int		i;

	i = 0;
	len = filelen(str);
	fd = open(str, O_RDONLY);
	while (read(fd, &txt, 1))
	{
		if (i >= len - end)
			ft_putchar(txt);
		i++;
	}
	close(fd);
}
