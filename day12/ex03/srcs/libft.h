/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 05:59:56 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:31:11 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BASE "0123456789"
# define HEX "0123456789abcdef"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>

void			file_error(void);
char			*ft_convert_base(int nbr, char*base_from, char *base_to);
void			ft_display_hexdump(char *file);
int				ft_power(int nb, int pow);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
char			*ft_strrev(char *str);
void			hexdump(char **file);
void			hex_print(char txt);
void			hex_print_c(char txt);

#endif
