/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:44:23 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/20 22:06:34 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*it;
	t_btree	*prev;

	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	it = *root;
	while (it)
	{
		prev = it;
		if ((*cmpf)(it->item, item) > 0)
			it = it->left;
		else
			it = it->right;
	}
	if ((*cmpf)(prev->item, item) > 0)
		prev->left = btree_create_node(item);
	else
		prev->right = btree_create_node(item);
}
