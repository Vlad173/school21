/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:07:27 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 21:19:01 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

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
