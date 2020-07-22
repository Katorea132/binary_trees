#include "binary_trees.h"

/**
 * binary_tree_inorder - Inorder traverse
 * @tree: Root node of the tree to traverse
 * @func: Function pointer
 * Return: none
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
