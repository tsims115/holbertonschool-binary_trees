#include "binary_trees.h"

/**
 * value_check - checks if value is in array
 *
 * @a: array to check
 * @value: value to chekc for
 * Return: 1 if it is and 0 if not
 */
int value_check(int *a, int value, size_t size)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		if (a[i] == value)
			return (1);
	return (0);
}

/**
 * array_to_bst - array to a binary search tree
 *
 * @array: array to use
 * @size: size of the array
 * Return: pointer to created tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	int *a_tmp = malloc(sizeof(int) * size);
	int i;
	bst_t *root = NULL;

	for (i = 0; i < (int)size; i++)
	{
		if (value_check(a_tmp, array[i], size) == 0)
		{
			if (!bst_insert(&root, array[i]))
				return(NULL);
		}
	}
	free(a_tmp);
	return (root);
}
