#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Is or is it not a leaf
 * @node: Node
 * Return: 1 or 0 if it is or isn't leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (!node->right && !node->left)
			return (1);
	return (0);
}
