#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child node
 *
 * @tree: tree to use
 * Return: number of nodes with atleast one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lsize += binary_tree_nodes(tree->left);
	if (tree->right)
		rsize += binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		return (lsize + rsize + 1);
	return (lsize + rsize);
}
