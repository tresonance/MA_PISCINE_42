/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 13:12:38 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/19 04:29:39 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef	int	(*t_type)(int, int);
int		add (int a, int b);
int		sub (int a, int b);
int		mul (int a, int b);
int		div (int a, int b);
int		mod (int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	do_op(int a, int b, char *str);

#endif
