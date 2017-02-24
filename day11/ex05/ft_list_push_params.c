/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 11:57:43 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/20 12:16:10 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list		*begin_list;
	t_list		*list;

	list = 0;
	begin_list = 0;
	while (ac > 0)
	{
		begin_list = ft_create_elem((void*)*(av + (ac - 1)));
		list = begin_list;
		ac--;
		while (ac > 0)
		{
			list->next = ft_create_elem((void*)*(av + (ac - 1)));
			list = list->next;
			ac--;
		}
	}
	return (begin_list);
}
