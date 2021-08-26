/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:56:05 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:46:49 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*it;
	t_list	*temp;
	t_list	*prev;

	it = *begin_list;
	prev = *begin_list;
	while (it != NULL)
	{
		temp = it;
		it = it->next;
		if (!(*cmp)(temp->data, data_ref))
		{
			if (temp == *begin_list)
				*begin_list = (*begin_list)->next;
			else
				prev->next = it;
			(*free_fct)(temp->data);
			free(temp);
		}
		else
			prev = temp;
	}
}
