#include "binary_trees.h"

/**
 * _binary_tree_size - measures size of binary tree
 *
 * @tree: tree to use
 * Return: size of tree
 */
int _binary_tree_size(const binary_tree_t *tree)
{
	int lsize = 0;
	int rsize = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lsize = _binary_tree_size(tree->left);
	if (tree->right)
		rsize = _binary_tree_size(tree->right);
	return (lsize + rsize + 1);
}


/**
 * binary_tree_is_perfect - checks if it is perfect
 *
 * @tree: tree to use
 * Return: int if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lsize = 0;
	int rsize = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lsize = _binary_tree_size(tree->left);
	if (tree->right)
		rsize = _binary_tree_size(tree->right);
	if (lsize == rsize)
		return (1);
	return (0);
}
