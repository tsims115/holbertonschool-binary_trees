#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node to left of parent node
 *
 * @parent: parent node
 * @value: value to insert
 * @return binary_tree_t* 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left)
		new_node->left = parent->left;
	parent->left = new_node;
	return (new_node);
}