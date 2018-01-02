/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 15:04:35 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/24 15:56:49 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUF_SIZE 8192

void	print_characters(char l, char m, char r, int x);
void	ft_putchar (char c);
void	ft_putstr (char *str);
int		ft_atoi(char *str);
char	*ft_strcat (char *s1, char *s2);
char	*ft_realloc(char *old, unsigned int size);
char	*get_characters(char left, char middle, char right, int x);
int		ft_strcmp (char *s1, char *s2);
void	ft_putnbr(int nb);
void	colle00(int x, int y);
void	colle01(int x, int y);
void	colle02(int x, int y);
void	colle03(int x, int y);
void	colle04(int x, int y);
char	*colle00_array(int x, int y);
char	*colle01_array(int x, int y);
char	*colle02_array(int x, int y);
char	*colle03_array(int x, int y);
char	*colle04_array(int x, int y);
void	display_result(char *str, int colle_number, int x, int y);
void	display_error(void);
char	*ft_strdup(char *str);
#endif
