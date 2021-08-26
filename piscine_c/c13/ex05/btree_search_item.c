/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:55:09 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/20 22:47:05 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*find;

	find = NULL;
	if (!root)
		return ((void *) 0);
	find = btree_search_item(root->left, data_ref, cmpf);
	if (find)
		return (find);
	if (!(*cmpf)(root->item, data_ref))
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}
