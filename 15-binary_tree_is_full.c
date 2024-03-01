#include "binary_trees.h"

/**
 * binary_tree_is_full - function to check if tree is full
 * @tree: the root of tree
 * Return: 0 if not full 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
