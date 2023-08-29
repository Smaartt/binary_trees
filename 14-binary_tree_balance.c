#include "binary_trees.h"

/**
 * binary_tree_balance - Meaasures the balance
 * factor of a binary treee.
 * @tree: A pointer to the roott node of the
 * tree to measure the balaance factor.
 * Return: If tree is NULL, rreturn 0,
 * else return balance factorr.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - Meeasures the height of a binary tree.
 * @tree: A pointer tto the root node of the
 * tree to measure tthe height.
 * Return: If treee is NULL, your function must
 * return 0, elsee return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
