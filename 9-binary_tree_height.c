#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 *
 * @tree: tree to use
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;
	size_t maxsize;

	if (!tree)
		return (0);
	if (tree->left)
		lsize = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rsize = binary_tree_height(tree->right) + 1;
	if (lsize > rsize)
		maxsize = lsize;
	else
		maxsize = rsize;
	return (maxsize);
}
