/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 11:38:29 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/19 11:38:41 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		num;
	t_list	*tmp;

	num = 0;
	tmp = begin_list;
	while (tmp)
	{
		num++;
		tmp = tmp->next;
	}
	return (num);
}
