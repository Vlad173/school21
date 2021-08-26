/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:27:11 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:26:01 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);

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
		printf("%s ", (char *) head->data);
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

t_list	*ft_list_push_strs(int size, char **strs)
{	
	t_list	*first;
	t_list	*other;
	int		i;

	if (size == 0)
		return (NULL);
	first = ft_create_elem(strs[size - 1]);
	other = first;
	i = 2;
	while (i < size + 1)
	{
		other->next = ft_create_elem(strs[size - i++]);
		other = other->next;
	}
	return (first);
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

int	main(void)
{
	{
		char	*strs[4] = {"First", "Second", "Third", "Fourth"};
		t_list	*head = ft_list_push_strs(4, strs);
		for (int i = 0; i < 4; ++i)
			printf("%s ", (char *) ft_list_at(head, i)->data);
		printf("\n");
	}

	t_list	*node;
	int first, second, third, fourth, fifth, sixth;
	t_list	*last;

	first = 1;
	second = 2;
	third = 3;
	fourth = 4;
	fifth = 5;
	sixth = 6;
	node = NULL;
//	ft_list_push_back(&node, &first);
//	ft_list_push_back(&node, &second);
//	ft_list_push_back(&node, &second);
//	ft_list_push_back(&node, &third);

	ft_list_push_back(&node, &fourth);


	for (int i = 0; i < 5; ++i)
		printf("%d ", *((int *) ft_list_at(node, i)->data));
	printf("\n");
	return (0);
}
