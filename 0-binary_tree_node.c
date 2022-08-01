#include "binary_trees.h"
/**
 * binary_tree_node - creates binary tree node
 * 
 * @parent: parent of node to be created
 * @value: value to insert into the node
 * Return: Returns pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
