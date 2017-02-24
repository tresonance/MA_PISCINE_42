/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 12:40:15 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/27 22:00:00 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		check_map(char *tmp_map)
{
	int		a;
	char	obst;
	char	empty;
	char	**tmp;

	tmp = NULL;
	tmp = create_map(tmp_map, tmp);
	a = 0;
	while (tmp[0][a])
		a++;
	obst = tmp[0][a - 2];
	empty = tmp[0][a - 3];
	tmp[0][a - 3] = '\0';
	a = 0;
	while (tmp[1][a])
		a++;
	if (check_caract(tmp, obst, empty, a) == 1)
		return (1);
	ft_free(tmp);
	return (0);
}

char	**alloc_map(char *tmp_map, int a, int b, char **map)
{
	int		c;

	while (tmp_map[a++])
		if (tmp_map[a] == '\n')
			b++;
	if ((map = (char**)malloc(sizeof(char*) * b + 1)) == NULL)
		return (NULL);
	map[b] = NULL;
	a = -1;
	b = 0;
	c = -1;
	while (tmp_map[++a])
	{
		b++;
		if (tmp_map[a] == '\n')
		{
			if ((map[++c] = (char*)malloc(sizeof(char) * b)) == NULL)
				return (NULL);
			b = 0;
		}
	}
	return (map);
}

char	**create_map(char *tmp_map, char **map)
{
	int		a;
	int		b;
	int		c;

	if ((map = alloc_map(tmp_map, 0, 0, map)) == NULL)
		return (NULL);
	a = 0;
	b = -1;
	c = 0;
	while (tmp_map[++b])
	{
		if (tmp_map[b] != '\n')
			map[a][c++] = tmp_map[b];
		else
		{
			map[a++][c] = '\0';
			c = 0;
		}
	}
	return (map);
}

char	*create_tmp_map(char *av, int fd)
{
	char	*str;
	char	buf[BUFF_SIZE];
	int		b;
	int		ret;

	if ((str = (char*)malloc(sizeof(char) * 1)) == NULL)
		return (NULL);
	b = 0;
	if (fd == 1)
	{
		if ((fd = open(av, O_RDONLY)) == -1)
			return (NULL);
		b = 1;
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		str = ft_charjoin(str, buf);
	}
	if (b == 1)
		close(fd);
	return (str);
}

char	**valid_map(char *av, int fd, char **map)
{
	char	*tmp_map;
	int		a;

	a = 0;
	if ((tmp_map = create_tmp_map(av, fd)) == NULL)
		return (NULL);
	if ((map = create_map(tmp_map, map)) == NULL)
		return (NULL);
	if (check_map(tmp_map) == 1)
		return (NULL);
	free(tmp_map);
	return (map);
}
