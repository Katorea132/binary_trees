#include "binary_trees.h"

/**
 * counter - Counts
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
 * size - FInds size
 * @tree: Tree
 * Return: size of the tree
 */
size_t size(const binary_tree_t *tree)
{
	return (counter(tree, 0));
}

/**
 * sizerY - Finds height
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
 * height - Height
 * @tree: Tree
 * Return: size
 */
size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (sizerY(tree) - 1);
}
/**
 * binary_tree_is_perfect - is or nah perfect
 * @tree: tree
 * Return: is or nah
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = height(tree), s = (int)size(tree);

	return (s == (2 << h) - 1 ? 1 : 0);
}
