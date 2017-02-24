/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:13:41 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/14 15:40:05 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		flag_delim(char c)
{
	if (c == '\n' || c == ' ' || c == '\t' || c == '\0')
		return (1);
	else
		return (0);
}

int		count_word(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		if (flag_delim(str[i] == 0 && flag_delim(str[i + 1]) == 1))
			nbr++;
		i++;
	}
	return (nbr);
}

void	add_word(char *word, char *str)
{
	int i;

	i = 0;
	while (flag_delim(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

void	fill_tab(char **tab, char *str)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (flag_delim(str[i]) == 0)
		{
			j = 0;
			while (flag_delim(str[i + j]) == 0)
				j++;
			tab[word] = (char*)malloc(sizeof(char) * (j + 1));
			add_word((tab[word]), (str + i));
			word++;
			i = i + j;
		}
		else
			i++;
	}
	tab[word] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	int		nbr;
	char	**tab;

	nbr = count_word(str);
	tab = (char**)malloc(sizeof(char*) * (nbr + 1));
	fill_tab(tab, str);
	return (tab);
}
