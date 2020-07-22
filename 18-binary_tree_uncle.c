#include "binary_trees.h"

/**
 * binary_tree_uncle - FInds uncles
 * @node: Node
 * Return: Uncle or nah
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
		return (node->parent == node->parent->parent->left ?
		node->parent->parent->right : node->parent->parent->left);
	return (0);
}
