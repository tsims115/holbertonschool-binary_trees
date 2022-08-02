#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * 
 * @tree: tree to use 
 * Return: return 1 if full and 0 if not or null 
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	full = binary_tree_is_full(tree->left);
	full = binary_tree_is_full(tree->right);
	if (full == 0)
		return (0);
	return (1);
}
