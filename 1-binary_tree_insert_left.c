#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts on the left
 * @parent: Parent
 * @value: value
 * Return: the tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = calloc(1, sizeof(binary_tree_t));

	if (!parent || !new)
	{
		free(new);
		return (0);
	}
	new->left = parent->left;
	parent->left = new;
	new->n = value;
	new->parent = parent;
	if (new->left)
		new->left->parent = new;
	return (new);
}
