/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:36:26 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/20 23:15:44 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		swap_node(t_list **tmp1, t_list **tmp2)
{
	t_list *tmp;

	tmp = *tmp1;
	*tmp1 = *tmp2;
	*tmp2 = tmp;
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	t_list *prev;
	t_list *current;
	t_list *next;

	current = begin_list;
	prev = NULL;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	begin_list = prev;
}
