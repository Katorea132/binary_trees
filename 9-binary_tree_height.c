#include "binary_trees.h"

/**
 * sizerY - FInds height
 * @tree: Tree
 * Return: sizes
 */
size_t sizerY(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = sizerY(tree->left);
	r = sizerY(tree->right);
	return (l > r ? l + 1 : r + 1);
}

/**
 * binary_tree_height - Height
 * @tree: Tree
 * Return: size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (sizerY(tree) - 1);
}
