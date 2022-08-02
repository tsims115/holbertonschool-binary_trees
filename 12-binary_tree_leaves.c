#include "binary_trees.h"

/**
 * binary_tree_leaves - measures size of binary tree
 *
 * @tree: tree to use
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lsize = binary_tree_leaves(tree->left);
	if (tree->right)
		rsize = binary_tree_leaves(tree->right);
	if (!tree->right && !tree->left)
		return (lsize + rsize + 1);
	return (lsize + rsize);
}
