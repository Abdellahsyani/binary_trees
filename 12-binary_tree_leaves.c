#include "binary_trees.h"

/**
 * binary_tree_leaves - the function to counts leaves
 * @tree: the root of tree
 * Return: number of leaf nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, sum;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	sum = left + right;
	return (sum);
}
