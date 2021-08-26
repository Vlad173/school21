/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:47:02 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 19:23:18 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list, t_list **mid)
{
	int	count;

	count = 0;
	*mid = begin_list;
	while (begin_list != NULL)
	{
		++count;
		if (count % 2 == 0)
			*mid = (*mid)->next;
		begin_list = begin_list->next;
	}
	if (count % 2 == 1)
		*mid = (*mid)->next;
	return (count);
}

void	swap(t_list *left, t_list *right)
{
	void	*temp;

	temp = left->data;
	left->data = right->data;
	right->data = temp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		index[2];
	t_list	*left;
	t_list	*right;
	t_list	*mid;

	index[0] = 0;
	left = begin_list;
	size = ft_list_size(begin_list, &mid);
	while (index[0] < size / 2)
	{
		index[1] = size / 2;
		index[1] += size % 2;
		right = mid;
		while (index[1] < size)
		{
			if (index[1] == size - index[0] - 1)
				swap(left, right);
			right = right->next;
			++index[1];
		}
		left = left->next;
		++index[0];
	}	
}
