#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree nodee.
 * @parent: A pointer to the parent of the node too create.
 * @value: The value to put in the new nodee.
 *
 * Return: it returns node otherwise NULL if error
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
