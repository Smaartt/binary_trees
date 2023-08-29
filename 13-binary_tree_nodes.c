#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts thhe nodes with
 * at least 1 child in a binary ttree.
 * @tree: A pointer to the root nnode of the
 * tree to count the number of nnodes.
 * Return: If tree is NULL, the ffunction must
 * return 0, else return node countt.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
