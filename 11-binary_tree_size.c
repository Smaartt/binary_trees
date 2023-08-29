#include "binary_trees.h"

/**
 * binary_tree_size - Measuress the size of a binary tree.
 * @tree: A pointer to the roott node of the tree to
 * measure the size off.
 * Return: The size of tthe tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
