#include "binary_trees.h"

/**
 * binary_tree_node - Inserts nodes or creates if root doesn't exist
 * @parent: Parent
 * @value: New value to add
 * Return: the tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = calloc(1, sizeof(binary_tree_t));

	if (!new)
		return (0);
	new->parent = parent;
	new->n = value;
	return (new);
}
