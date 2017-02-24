/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:44:42 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/11 10:45:13 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		len;
	int		ind;

	ind = 0;
	len = ft_strlen(dest);
	while (src[ind])
	{
		dest[len + ind] = src[ind];
		ind++;
	}
	dest[len + ind] = '\0';
	return (dest);
}
