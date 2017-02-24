/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 05:02:00 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:26:38 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

int		ft_atoi(char *str);
void	ft_display_tail(char *str, int end);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_tail(int argc, char **argv);

#endif
