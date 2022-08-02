#include "binary_trees.h"
/**
 * binary_tree_depth - measure depth of a node in a binary tree
 *
 * @tree: tree to use
 * Return: depth of node in tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size;

	if (!tree || !tree->parent)
		return (0);
	size = binary_tree_depth(tree->parent);
	return (size + 1);
}
