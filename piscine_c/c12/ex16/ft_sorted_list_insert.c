/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:07:44 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:52:16 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*prev;
	t_list	*curr;
	t_list	*new;

	new = ft_create_elem(data);
	curr = *begin_list;
	while (curr && (*cmp)(curr->data, data) < 0)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == *begin_list)
	{
		*begin_list = new;
		new->next = curr;
		return ;
	}
	new->next = curr;
	prev->next = new;
}
