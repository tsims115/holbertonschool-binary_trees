#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 *
 * @tree: tree to use
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lsize = binary_tree_size(tree->left);
	if (tree->right)
		rsize = binary_tree_size(tree->right);
	return (lsize + rsize + 1);
}
