#include "binary_trees.h"

/**
 * counti - COunts
 * @tree: tree
 * @count: Counter
 * Return: size_t
 */
size_t counti(const binary_tree_t *tree, size_t count)
{

	if (tree)
	{
		if (tree->left || tree->right)
			count++;
		count = counti(tree->left, count), count = counti(tree->right, count);
	}
	return (count);
}
/**
 * binary_tree_nodes - Finds nodes
 * @tree: tree
 * Return: amount of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (counti(tree, 0));
}
