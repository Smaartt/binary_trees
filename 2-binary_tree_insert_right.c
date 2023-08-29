#include "binary_trees.h"

/**
 * binary_tree_insert_right - Innsert a node as the right-child
 * of another in a binary treee.
 * @parent: A pointer to the noode to insert the right-child in.
 * @value: The value to store inn the new node.
 * Return: If parent is NULL or aan error occurs - NULL.
 *         Otherwise - a pointer tto the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
