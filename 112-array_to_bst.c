#include "binary_trees.h"

/**
 * array_to_bst - array to a binary search tree
 *
 * @array: array to use
 * @size: size of the array
 * Return: pointer to created tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	int i;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
