#include "binary_trees.h"

/**
 * bst_search - searches for value inside BST tree
 *
 * @tree: tree to use
 * @value: value to look for
 * Return: returns pointer to node containing value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	const bst_t *node = NULL;

	if (!tree)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (tree->left)
		node = bst_search(tree->left, value);
	if (node)
		return ((bst_t *)node);
	if (tree->right)
		node = bst_search(tree->right, value);
	return ((bst_t *)node);
}
