#include "binary_trees.h"

/**
 * binary_tree_is_root - Is or is it not a root
 * @node: Node
 * Return: 1 or 0 if it is or isn't root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
		if (!node->parent)
			return (1);
	return (0);
}
