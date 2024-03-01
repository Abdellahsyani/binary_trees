#include "binary_trees.h"

/**
 * binary_tree_postorder - function to travers nodes by using postorder
 * @tree: the root of tree
 * @func: ointer of a funtion to call nodes
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
