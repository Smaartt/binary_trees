#include "binary_trees.h"

/**
 * binary_tree_leaves - Countss the leaves in a binary tree.
 * @tree: A pointer to the roott node of the tree
 * to count the leaves off.
 * Return: The number of lleaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
