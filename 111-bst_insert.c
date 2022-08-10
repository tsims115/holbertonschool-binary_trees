#include "binary_trees.h"

/**
 * bst_insert - inserts node into bst
 *
 * @tree: tree to insert node in
 * @value: value to use with node
 * @return bst_t*
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *cur_node;
	if (*tree == NULL)
		return (*tree = (bst_t *)binary_tree_node(*tree, value));
	cur_node = *tree;
	while(cur_node)
	{
		if (cur_node->n == value)
			return (NULL);
		if (value > cur_node->n)
		{
			if (cur_node->right)
			{
				cur_node = cur_node->right;
				continue;
			}
			cur_node->right = (bst_t *)binary_tree_node(cur_node, value);
			return (cur_node->right);
		}
		if (value < cur_node->n)
		{
			if (cur_node->left)
			{
				cur_node = cur_node->left;
				continue;
			}
			cur_node->left = (bst_t *)binary_tree_node(cur_node, value);
			return (cur_node->left);
		}
	}
	return (NULL);
}
