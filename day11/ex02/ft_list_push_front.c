/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 11:18:25 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/20 09:01:12 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*node;

	node = ft_create_elem(data);
	if (*begin_list)
	{
		node->next = *begin_list;
		*begin_list = node;
	}
	else
		*begin_list = node;
}
