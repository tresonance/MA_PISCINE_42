/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mswamina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 08:10:08 by mswamina          #+#    #+#             */
/*   Updated: 2016/07/15 16:58:01 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_alert(void)
{
	write(1, "Alert!!! \n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int		find_spy(char *str)
{
	if (ft_strcmp(str, "president") == 0 || ft_strcmp(str, "powers") == 0 ||
		ft_strcmp(str, "attack") == 0)
		return (1);
	return (0);
}

char	*convert_case(char *s)
{
	int	i;

	i = 0;
	if (s[i] == 32)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] > 64 && s[i] < 91)
			s[i] = s[i] + 32;
		else
			i++;
	}
	return (s);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 1)
	{
		while (argv[i])
		{
			argv[i] = convert_case(argv[i]);
			if (find_spy(argv[i]) == 1)
				aff_alert();
			i++;
		}
	}
	return (0);
}
