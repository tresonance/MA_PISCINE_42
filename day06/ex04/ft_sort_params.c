/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 06:46:08 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/13 18:18:48 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap_words(char **str1, char **str2)
{
	char *temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

char	**ft_sort_params(char **res, int n)
{
	int i;
	int j;
	int p;

	i = 0;
	j = 0;
	p = 0;
	while (i < n)
	{
		while (j < n - 1 - p)
		{
			if (ft_strcmp(res[j], res[j + 1]) > 0)
				ft_swap_words(&res[j], &res[j + 1]);
			j++;
		}
		j = 0;
		i++;
		p++;
	}
	return (res);
}

int		main(int argc, char *argv[])
{
	char	**res;
	int		i;

	i = 1;
	if (argc >= 1)
	{
		res = ft_sort_params(argv + 1, argc - 1);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
