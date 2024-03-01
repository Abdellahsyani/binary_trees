#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of tree
 * @tree: the root of tree
 * Return: the depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree != NULL && tree->parent != NULL)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;

	return (depth);
}
