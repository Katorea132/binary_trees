#include "binary_trees.h"

/**
 * binary_tree_balance - FInds the balance
 * @tree: tree
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;

	return (l - r);
}
