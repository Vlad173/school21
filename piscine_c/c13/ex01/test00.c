#include <stdio.h>
#include "ft_btree.h"
#include <stdlib.h>
void	func(void *data)
{
	printf("-%s-", (char *)data);
}


t_btree *btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *) malloc (sizeof(t_btree));
	if (!node)
		return (NULL);	
	node->left = NULL;
	node->right = NULL;
	node->item = item;
	return (node);
}

void	btree_apply_prefix(t_btree *tree, void (*applyf)(void *));

int main()
{
	t_btree	*tree;
	tree = (void *)(0);
	btree_apply_prefix(tree, &func);
	tree = btree_create_node("root");
	tree->right = btree_create_node("right");
	tree->left = btree_create_node("left");
	tree->right->right = btree_create_node("rightright");
	tree->right->left = btree_create_node("rightleft");
	tree->left->left = btree_create_node("leftleft");
	btree_apply_prefix(tree, &func);
}
