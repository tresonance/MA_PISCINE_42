/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtraore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:28:47 by ibtraore          #+#    #+#             */
/*   Updated: 2016/07/20 14:16:37 by ibtraore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		swap_node(t_list *n1, t_list *n2)
{
	void	*tmp;

	tmp = n1->data;
	n1->data = n2->data;
	n2->data = tmp;
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *tmp;

	tmp = *begin_list;
	while (tmp->next)
	{
		if (cmp(tmp->data, tmp->next->data) > 0)
		{
			swap_node(tmp, tmp->next);
			tmp = *begin_list;
		}
		else
			tmp = tmp->next;
	}
}
