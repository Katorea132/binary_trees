#include "binary_trees.h"

/**
 * counte - Counts
 * @tree: tree
 * @count: Counter
 * Return: size_t
 */
size_t counte(const binary_tree_t *tree, size_t count)
{

	if (tree)
	{
		if (!tree->left && !tree->right)
			count++;
		else
			count = counte(tree->left, count), count = counte(tree->right, count);
	}
	return (count);
}
/**
 * binary_tree_leaves - Finds leaves
 * @tree: tree
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (counte(tree, 0));
}
