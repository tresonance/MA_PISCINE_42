/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:36:56 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/14 15:39:04 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*txt;

	if (!src)
		return (NULL);
	i = ft_strlen(src);
	txt = (char*)malloc(sizeof(*txt) * (i + 1));
	if (!txt)
		return (NULL);
	j = 0;
	while (j < i)
	{
		txt[j] = src[j];
		j++;
	}
	txt[j] = '\0';
	return (txt);
}
