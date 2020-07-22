#include "binary_trees.h"

/**
 * binary_tree_is_perfect - is or nah perfect
 * @tree: tree
 * Return: is or nah
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
