#include "binary_trees.h"

/**
 * fully - finds full nodes
 * @tree: tree
 * @full: full or nah
 * Return: full or nah
 */
int fully(const binary_tree_t *tree, int full)
{
	if (tree && full >= 0)
	{
		if ((!tree->left && !tree->right) ||
		(tree->left && tree->right))
		{
			full = 1;
			full = fully(tree->left, full), full = fully(tree->right, full);
		}
		else
			full = -1;
	}
	return (full);
}

/**
 * binary_tree_is_f - is it full or nah
 * @tree: Tree
 * Return: 0 if not full, 1 if full
 */
int binary_tree_is_f(const binary_tree_t *tree)
{
	int full = 0;

	full = fully(tree, 0);
	return (full <= 0 ? 0 : 1);
}

/**
 * binary_tree_h - Height
 * @tree: Tree
 * Return: size
 */
size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_h(tree->left);
	r = binary_tree_h(tree->right);
	return (l > r ? l + 1 : r + 1);
}

/**
 * binary_tree_b - Finds the balance
 * @tree: tree
 * Return: balance
 */
int binary_tree_b(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree && tree->left)
		l = binary_tree_h(tree->left);
	if (tree && tree->right)
		r = binary_tree_h(tree->right);

	return (l - r);
}

/**
 * binary_tree_is_perfect - is or nah perfect
 * @tree: tree
 * Return: is or nah
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && binary_tree_is_f(tree) && binary_tree_b(tree) == 0)
		return (1);
	return (0);
}
