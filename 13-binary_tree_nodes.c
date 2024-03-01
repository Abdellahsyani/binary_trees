#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes
 * @tree: the root of tree
 * Return: the sum of nodes that have one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += (tree->left || tree->right ? 1 : 0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
