/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colles_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 23:39:08 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/24 11:00:30 by ggaudin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*colle00_array(int x, int y)
{
	int		i;
	char	*old;
	char	*new;

	i = 0;
	if (x > 0 && y > 0)
	{
		old = get_characters('o', '-', 'o', x);
		while (i++ < y - 2)
		{
			new = get_characters('|', ' ', '|', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		if (y > 1)
		{
			new = get_characters('o', '-', 'o', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		return (old);
	}
	return (NULL);
}

char	*colle01_array(int x, int y)
{
	int		i;
	char	*old;
	char	*new;

	i = 0;
	if (x > 0 && y > 0)
	{
		old = get_characters('/', '*', '\\', x);
		while (i++ < (y - 2))
		{
			new = get_characters('*', ' ', '*', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		if (y > 1)
		{
			new = get_characters('\\', '*', '/', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		return (old);
	}
	return (NULL);
}

char	*colle02_array(int x, int y)
{
	int		i;
	char	*old;
	char	*new;

	i = 0;
	if (x > 0 && y > 0)
	{
		old = get_characters('A', 'B', 'A', x);
		while (i++ < (y - 2))
		{
			new = get_characters('B', ' ', 'B', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		if (y > 1)
		{
			new = get_characters('C', 'B', 'C', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		return (old);
	}
	return (NULL);
}

char	*colle03_array(int x, int y)
{
	int		i;
	char	*old;
	char	*new;

	i = 0;
	if (x > 0 && y > 0)
	{
		old = get_characters('A', 'B', 'C', x);
		while (i++ < (y - 2))
		{
			new = get_characters('B', ' ', 'B', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		if (y > 1)
		{
			new = get_characters('A', 'B', 'C', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		return (old);
	}
	return (NULL);
}

char	*colle04_array(int x, int y)
{
	int		i;
	char	*old;
	char	*new;

	i = 0;
	if (x > 0 && y > 0)
	{
		old = get_characters('A', 'B', 'C', x);
		while (i++ < (y - 2))
		{
			new = get_characters('B', ' ', 'B', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		if (y > 1)
		{
			new = get_characters('C', 'B', 'A', x);
			old = ft_realloc(old, x);
			old = ft_strcat(old, new);
		}
		return (old);
	}
	return (NULL);
}
