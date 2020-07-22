#include "binary_trees.h"


/**
 * counter - COunts
 * @tree: tree
 * @count: Counter
 * Return: size_t
 */
size_t counter(const binary_tree_t *tree, size_t count)
{

	if (tree)
	{
		count++;
		count = counter(tree->left, count);
		count = counter(tree->right, count);
	}
	return (count);
}
/**
 * binary_tree_size - FInds size
 * @tree: Tree
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (counter(tree, 0));
}
