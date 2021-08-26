/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:27:11 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 21:37:05 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_reverse(t_list **begin_list);

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

int	main(void)
{
	{
		char	*strs[4] = {"First", "Second", "Third", "Fourth"};
		t_list	*head = ft_list_push_strs(4, strs);
		ft_print_list(head);
		ft_list_reverse(&head);
		ft_print_list(head);
	}


	return (0);
}
