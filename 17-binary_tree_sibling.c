#include "binary_trees.h"

/**
 * binary_tree_sibling - FInds the sibbling
 * @node: Node
 * Return: The sibblking or nah
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
		return (node == node->parent->right ?
		node->parent->left : node->parent->right);
	return (0);
}
