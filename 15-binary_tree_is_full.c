#include "binary_trees.h"

/**
 * is_full_recursive - Checkss if a binary tree is full recursively.
 * @tree: A pointer tto the root node of the tree to check.
 *
 * Return: If tree is not fulll, 0.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checkss if a binary tree is full.
 * @tree: A pointer too the root node of the tree to check.
 *
 * Return: If tree iss NULL or is not full - 0.
 *         Otherwisee - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
