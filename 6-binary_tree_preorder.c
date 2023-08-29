#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes throughh a binary tree
 * using pre-order ttraversal.
 * @tree: A pointerr to the root node of the tree to traverse.
 * @func: A pointerr to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
