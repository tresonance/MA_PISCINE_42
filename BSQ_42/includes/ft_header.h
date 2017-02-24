/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 10:04:55 by brel-baz          #+#    #+#             */
/*   Updated: 2016/07/26 17:46:37 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>

# define BUF_SIZE 4096
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

void	ft_putstr(char *str);
char	*ft_link_string(char *prev, char *next);
char	**two_arry_map (char *str, int a, int b, char **map);

#endif
