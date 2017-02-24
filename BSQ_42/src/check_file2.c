/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 12:40:26 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/27 22:00:19 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*ft_charjoin(char *s1, char *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if ((ptr = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (ptr == NULL || !s1 || !s2)
		return (NULL);
	while (s1[++i])
		ptr[i] = s1[i];
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}

int		check_caract(char **map, char obst, char empty, int ligne_size)
{
	int a;
	int b;
	int colone_size;

	a = 0;
	colone_size = ft_atoi(map[0]);
	while (map[++a])
	{
		b = -1;
		while (map[a][++b])
			if (map[a][b] != obst && map[a][b] != empty && map[a][b] != '\0')
				return (1);
		if (b != ligne_size)
			return (1);
	}
	if (a != colone_size + 1)
		return (1);
	return (0);
}
