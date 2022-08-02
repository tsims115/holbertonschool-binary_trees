#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle
 *
 * @node: node to use
 * Return: poitner
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *cur_node;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	cur_node = node->parent->parent;
	if (cur_node->left == node->parent)
		return (cur_node->right);
	return (cur_node->left);
}
