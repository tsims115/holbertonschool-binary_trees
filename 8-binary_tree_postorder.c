#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses using inorder method
 *
 * @tree: tree to use
 * @func: func to use
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
