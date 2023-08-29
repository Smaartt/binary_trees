#include "binary_trees.h"


/**
 * is_leaf - Checks if a node is a leaf off a binary tree.
 * @node: A pointer to the node to checkk.
 *
 * Return: If the node is a leaf, 1, othherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of a givenn
 *         node in a binary treee.
 * @tree: A pointer to the nodee to measure the depth of.
 *
 * Return: The depth of nodee.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Returns a leaf of a binaary tree.
 * @tree: A pointer to the root nodee of the tree to find a leaf in.
 *
 * Return: A pointer to the first eencountered leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks iff a binary tree is perfect recursively.
 * @tree: A pointer to the root noode of the tree to check.
 * @leaf_depth: The depth of onee leaf in the binary tree.
 * @level: Level of current nodee.
 *
 * Return: If the tree is perfectt, 1, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks iif a binary tree is perfect.
 * @tree: A poinnter to the root node of the tree to check.
 *
 * Return: If ttree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
