/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 03:44:38 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:20:57 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>

void	ft_cat(int argc, char **argv);
void	ft_display(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif
