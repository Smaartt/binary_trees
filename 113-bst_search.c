#include "binary_trees.h"

/**
 * bst_search - Searches ffor a value in a binary search tree.
 * @tree: A pointer to tthe root node of the BST to search.
 * @value: The value too search for in the BST.
 *
 * Return: If the treee is NULL or the value is not found, NULL.
 *         Otherwisee, a pointer to the node containing the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
