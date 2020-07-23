#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth
 * @tree: Tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
		for (; tree->parent; count++)
			tree = tree->parent;
	return (count);
}
