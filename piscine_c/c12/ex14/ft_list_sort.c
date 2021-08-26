/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:56:36 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:36:55 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	swap(t_list **p1, t_list **p2)
{
	t_list	*temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void	ft_swap1(t_list **i, t_list **j, t_list **p1, t_list **p2)
{
	if ((*i)->next == *j)
	{
		if (*p1 != NULL)
			(*p1)->next = *j;
		(*i)->next = (*j)->next;
		(*j)->next = *i;
	}
	else
	{
		swap(&(*i)->next, &(*j)->next);
		if (*p1 != NULL)
			swap(&(*p1)->next, &(*p2)->next);
		else
			(*p2)->next = *i;
	}
	swap(&(*i), &(*j));
}

void	crutch(t_list **p1, t_list **p2)
{
	*p1 = *p2;
	*p2 = (*p2)->next;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*i;
	t_list	*j;
	t_list	*p1;
	t_list	*p2;

	if (*begin_list == NULL)
		return ;
	i = *begin_list;
	p1 = NULL;
	while (i->next != NULL)
	{
		j = i->next;
		p2 = i;
		while (j != NULL)
		{
			if ((*cmp)(i->data, j->data) > 0)
			{
				if (p1 == NULL)
					*begin_list = j;
				ft_swap1(&i, &j, &p1, &p2);
			}
			crutch(&p2, &j);
		}
		crutch(&p1, &i);
	}
}
