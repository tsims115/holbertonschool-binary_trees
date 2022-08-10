#include "binary_trees.h"

/**
 * find_parent_number - finds parent number and determines what side
 * @tree: tree to use
 * @side: side of root
 * Return: parent number
 */

int find_parent_number(const binary_tree_t *tree, char **side)
{
	const binary_tree_t *cur_node;
	const binary_tree_t *last_node;

	cur_node = tree;
	while (cur_node->parent != NULL)
	{
		last_node = cur_node;
		cur_node = cur_node->parent;
	}
	if (last_node->n == cur_node->left->n)
		*side = "left";
	else
		*side = "right";
	return (cur_node->n);
}

/**
 * binary_tree_is_bst - checks for valid binary search tree
 *
 * @tree: tree to check
 * Return: returns 1 if valid and 0 if Null or invalid
 */
int binary_tree_is_bst(const binary_tree_t *tree) {
	int status = 1;
	int pnumber;
	char *side;

	if (!tree)
		return (0);
	if (tree->parent)
		pnumber = find_parent_number(tree, &side);
	if (tree->parent)
	{
		if (strcmp(side, "right") == 0)
			if (tree->n <= pnumber)
				return (0);
		if (strcmp(side, "left") == 0)
			if (tree->n >= pnumber)
				return (0);
	}
	if (tree->left)
		{
			if (tree->left->n > tree->n)
				return (0);
			status = binary_tree_is_bst(tree->left);
		}
	if (status == 0)
		return (status);
	if (tree->right)
		{
			if (tree->right->n < tree->n)
				return (0);
			status = binary_tree_is_bst(tree->right);
		}
	return (status);
}
