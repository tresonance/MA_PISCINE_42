/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 07:04:53 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/19 17:29:29 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"
#include "../include/ft_opp.h"

t_type		operator_chosen(char *str)
{
	int		i;

	i = 0;
	while (i < 6)
	{
		if (str[0] == gl_opptab[i].sign[0])
			return (gl_opptab[i].f);
		i++;
	}
	return (0);
}

int			ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr("error : only [ + - * / % ] are accepted");
	return (-2147483648);
}

void		do_op(int a, int b, char *str)
{
	t_type		fp;

	fp = operator_chosen(str);
	if (fp == 0)
		ft_usage(a, b);
	if ((b == 0) && (str[0] == '%'))
		ft_putstr("Stop: modulo by zero\n");
	else if ((b == 0) && (str[0] == '/'))
		ft_putstr("Stop: division by zero\n");
	else
	{
		ft_putnbr(fp(a, b));
		ft_putstr("\n");
	}
}

int			main(int argc, char *argv[])
{
	if (argc == 4)
		do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]);
	return (0);
}
