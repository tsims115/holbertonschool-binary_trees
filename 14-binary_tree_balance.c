#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of tree
 *
 * @tree: tree to use
 * Return: measure of tree balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lsize = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		rsize = binary_tree_balance(tree->right) + 1;
	return ((int)(lsize - rsize));
}
