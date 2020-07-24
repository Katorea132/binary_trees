#include "binary_trees.h"


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
 * binary_tree_h - Height
 * @tree: Tree
 * Return: size
 */
size_t binary_tree_h(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (sizerY(tree) - 1);
}

/**
 * binary_tree_balance - Finds the balance
 * @tree: tree
 * Return: balance
 */
int balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree && tree->left)
		l = binary_tree_h(tree->left) + 1;
	if (tree && tree->right)
		r = binary_tree_h(tree->right) + 1;

	return (l - r);
}

/**
 * binary_tree_insert_right - Inserts on the right
 * @parent: Parent
 * @value: value
 * Return: the tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = calloc(1, sizeof(binary_tree_t));

	if (!parent || !new)
	{
		free(new);
		return (0);
	}
	new->right = parent->right;
	parent->right = new;
	new->n = value;
	new->parent = parent;
	if (new->right)
		new->right->parent = new;
	return (new);
}
