#include "binary_trees.h"

/**
 * _binary_tree_height - measures height of binary tree
 *
 * @tree: tree to use
 * Return: size of tree
 */
int _binary_tree_height(const binary_tree_t *tree)
{
	int lsize = 0;
	int rsize = 0;
	int maxsize;

	if (!tree)
		return (0);
	if (tree->left)
		lsize += _binary_tree_height(tree->left);
	if (tree->right)
		rsize += _binary_tree_height(tree->right);
	if (lsize > rsize)
		maxsize = lsize;
	else
		maxsize = rsize;
	return (maxsize + 1);
}

/**
 * binary_tree_balance - measures the balance factor of tree
 *
 * @tree: tree to use
 * Return: measure of tree balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
