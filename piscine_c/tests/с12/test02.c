/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:27:11 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:08:30 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int ft_list_size(t_list *begin_list);

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
	t_list	*empty = NULL;
	int		first;
	int		second;
	int		third;

	first = 1;
	second = 2;
	third = 3;
	node = NULL;
	ft_list_push_front(&node, &first);
	ft_list_push_front(&node, &second);
	ft_list_push_front(&node, &third);
	ft_print_list(node);
	printf("Size = %d\n", ft_list_size(node));
	printf("Size = %d\n", ft_list_size(empty));
	return (0);
}
