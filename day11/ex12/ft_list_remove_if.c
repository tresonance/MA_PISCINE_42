/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 13:17:01 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/20 13:46:51 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *tmp2;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = begin_list->next;
		free(tmp);
	}
	tmp2 = *begin_list;
	while (tmp2 && tmp2->next)
	{
		if (cmp(tmp2->next, data_ref) == 0)
		{
			tmp = tmp2->next;
			tmp2->next = tmp->next;
			free(tmp);
		}
		if (tmp2->next)
			tmp2 = tmp2->next;
	}
}
