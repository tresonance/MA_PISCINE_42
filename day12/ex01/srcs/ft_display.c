/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 04:22:26 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 18:13:29 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void		ft_display(char *str)
{
	char	txt;
	int		fd;

	fd = open(str, O_RDONLY);
	while (read(fd, &txt, 1))
		ft_putchar(txt);
	close(fd);
}
