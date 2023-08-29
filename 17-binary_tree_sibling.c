#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds thee sibling of a
 * node in a binary treee.
 * @node: A pointer to thee node to find the sibling of.
 * Return: If node is NULL oor there is no sibling - NULL.
 * Otherwise - a pointer to tthe sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
