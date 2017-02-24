/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 05:59:07 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/21 19:30:39 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				g_add;
int				g_end;
static int		g_i;
int				g_option;
static char		**g_n_file;

void			file_error(void)
{
	while (open(g_n_file[g_i + 1], O_RDONLY) == -1 && g_n_file[g_i + 1])
	{
		ft_putstr("\nhexdump: ");
		ft_putstr(g_n_file[g_i + 1]);
		ft_putstr(": No such file or directory");
		g_end--;
		g_i++;
	}
}

static void		print_bad(void)
{
	ft_putstr("hexdump: ");
	ft_putstr(g_n_file[g_i]);
	ft_putstr(": No such file or directory\n");
	g_end--;
	if (!g_end)
	{
		ft_putstr("hexdump: ");
		ft_putstr(g_n_file[g_i]);
		ft_putstr(": Bad file descriptor\n");
	}
}

void			hexdump(char **file)
{
	int		in;

	g_i = 0;
	in = 0;
	if (g_option)
		g_i = 1;
	g_n_file = file;
	while (file[++g_i])
	{
		if (open(file[g_i], O_RDONLY) > -1)
		{
			ft_display_hexdump(file[g_i]);
			in = 1;
		}
		else if (in == 0)
			print_bad();
	}
}
