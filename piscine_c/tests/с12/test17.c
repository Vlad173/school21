/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:27:11 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 22:37:51 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

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
	int i = 0;
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

void	ft_list_push_back(t_list **begin_list, void *data)
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

void	free_fct(void *data)
{
	(void) data;
	printf("Free data\n");
}

int	cmp(int *a, int *b)
{
	return (*a - *b);
}


int	main(void)
{
	t_list	*list1 = NULL, *list2 = NULL;
	int first, second, third, fourth, fifth, sixth;
	t_list	*last;

	first = 1;
	second = 2;
	third = 3;
	fourth = 4;
	fifth = 5;
	sixth = 6;

	ft_list_push_back(&list1, &first);
	ft_list_push_back(&list1, &second);
	ft_list_push_back(&list1, &second);
	ft_list_push_back(&list1, &third);
 	ft_list_push_back(&list1, &fourth);
	ft_print_list(list1);

	
	ft_list_push_back(&list2, &first);
	ft_list_push_back(&list2, &second);
	ft_list_push_back(&list2, &second);
	ft_list_push_back(&list2, &third);
 	ft_list_push_back(&list2, &fourth);
	ft_print_list(list2);
	ft_sorted_list_merge(&list1, list2, cmp);
	ft_print_list(list1);
	return (0);
}
