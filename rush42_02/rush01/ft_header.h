/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 13:38:35 by tmillet           #+#    #+#             */
/*   Updated: 2016/07/17 14:57:28 by jorobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

int		**ft_array(void);
int		**ft_load_array(int **tab, char **argv);
void	ft_putchar(char c);
int		ft_is_digit(char c);
void	ft_putstr(char *str);
void	ft_print_tab(int **tab);
int		is_empty(int **tab, int *row, int *col);
int		ft_all_check(int **tab, int i, int j, int number);
int		sudoku_solver(int **tab);
void	destroy_tab(int **tab);
int		is_valid(int argc, char **argv);

#endif
