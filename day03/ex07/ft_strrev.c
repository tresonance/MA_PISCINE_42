/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 16:33:30 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/07 16:46:46 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void		ft_swap(char *c, char *d)
{
	char tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

char		*ft_strrev(char *str)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		ft_swap(str + i, str + j);
		i++;
		j--;
	}
	return (str);
}
