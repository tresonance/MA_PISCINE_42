/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 17:07:36 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/19 21:04:42 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

t_type	operator_chose(char *str)
{
	int		i;
	t_type	f[5];

	i = 0;
	f[0] = &add;
	f[1] = &sub;
	f[2] = &mul;
	f[3] = &div;
	f[4] = &mod;
	if (str[0] == '+')
		return (f[0]);
	else if (str[0] == '-')
		return (f[1]);
	else if (str[0] == '*')
		return (f[2]);
	else if (str[0] == '/')
		return (f[3]);
	else if (str[0] == '%')
		return (f[4]);
	return (0);
}

void	do_op(int a, int b, char *str)
{
	t_type	f;

	f = operator_chose(str);
	ft_putnbr(f(a, b));
	ft_putchar('\n');
}

int		ft_is_digit(char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			return (1);
		s++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 4)
	{
		if (!argv[1] || !argv[2] || !argv[3] || !*argv[1] || !*argv[2] ||
			!*argv[3])
			ft_putstr("0\n");
		else if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%')
			ft_putstr("0\n");
		else if ((ft_atoi(argv[3]) == 0) && (argv[2][0] == '/'))
			ft_putstr("Stop : division by zero\n");
		else if ((ft_atoi(argv[3]) == 0) && (argv[2][0] == '%'))
			ft_putstr("Stop : modulo by zero\n");
		else
			do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]);
	}
	return (0);
}
