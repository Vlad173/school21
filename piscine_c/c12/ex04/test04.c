/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:27:11 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:24:59 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_back(t_list **begin_list, void *data);

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_print_list(t_list *head)
{
	if (head == NULL)
		printf("NULL!");
	while (head != NULL)
	{
		printf("%d ", *((int *)head->data));
		head = head->next;
	}
	printf("\n");
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*temp;

	
	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	temp = *begin_list;
	*begin_list = ft_create_elem(data);
	(*begin_list)->next = temp;
}

int	main(void)
{
	t_list	*node;
	int		first;
	int		second;
	int		third;
	t_list	*last;

	first = 1;
	second = 2;
	third = 3;
	node = NULL;
	ft_print_list(node);
	ft_list_push_back(&node, &first);
	ft_print_list(node);
	ft_list_push_back(&node, &second);
	ft_print_list(node);
	ft_list_push_back(&node, &third);
	ft_print_list(node);
	return (0);
}
