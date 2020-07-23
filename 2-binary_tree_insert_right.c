#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts on the right
 * @parent: Parent
 * @value: value
 * Return: the tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = calloc(1, sizeof(binary_tree_t));

	if (!parent || !new)
	{
		free(new);
		return (0);
	}
	new->right = parent->right;
	parent->right = new;
	new->n = value;
	new->parent = parent;
	if (new->right)
		new->right->parent = new;
	return (new);
}
