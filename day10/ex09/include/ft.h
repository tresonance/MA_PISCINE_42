/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 04:50:13 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/19 19:44:20 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

typedef int			(*t_type)(int, int);

typedef struct		s_opp
{
	char			sign[2];
	t_type			f;
}					t_opp;

int					ft_usage(int a, int b);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_atoi(char *str);
int					ft_add(int a, int b);
int					ft_sub(int a, int b);
int					ft_mul(int a, int b);
int					ft_div(int a, int b);
int					ft_mod(int a, int b);
void				do_op(int a, int b, char *str);

#endif
