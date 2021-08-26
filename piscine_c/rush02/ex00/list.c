/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:27:44 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/22 18:40:08 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_create_elem(char *data)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_list_push_back(t_list **begin_list, char *data)
{
	t_list	*it;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	it = *begin_list;
	while (it->next != NULL)
		it = it->next;
	it->next = ft_create_elem(data);
}

void	print_list(t_list *begin)
{
	while (begin != NULL)
	{
		putstr(begin->data);
		if (begin->next != NULL)
			write(1, " ", 1);
		begin = begin->next;
	}
	write(1, "\n", 1);
}

void	ft_list_clear(t_list *begin_list)
{
	t_list	*temp;

	while (begin_list != NULL)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free(temp);
	}		
}
