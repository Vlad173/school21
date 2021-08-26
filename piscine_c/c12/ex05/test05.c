/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:27:11 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:19:27 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_push_strs(int size, char **strs);

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

int	main(void)
{
	{
		char	*strs[4] = {"First", "Second", "Third", "Fourth"};
		t_list	*head = ft_list_push_strs(4, strs);
		ft_print_list(head);
	}

	{
		char	*strs[0];
		t_list	*head = ft_list_push_strs(0, strs);
		ft_print_list(head);
	}

	{
		char	*strs[1] = {"First"};
		t_list	*head = ft_list_push_strs(1, strs);
		ft_print_list(head);
	}

	{
		char	*strs[2] = {"First", "Second"};
		t_list	*head = ft_list_push_strs(2, strs);
		ft_print_list(head);
	}

	return (0);
}
