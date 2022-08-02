#include "binary_trees.h"
/**
 * binary_tree_sibling - check for sibling if one
 *
 * @node: node to check for sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *cur_node;

	if (!node || !node->parent)
		return (NULL);
	cur_node = node->parent;
	if (cur_node->left == node)
		return (cur_node->right);
	return (cur_node->left);
}
