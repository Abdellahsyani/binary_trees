#include "binary_trees.h"

/**
 * binary_tree_is_root - chek if the node is a root
 * @node: the given node to check it
 * Return: 1 if success or 0 if fail
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	binary_tree_t *ptr;

	ptr = node->parent;

	if (node == NULL)
		return (0);

	if (ptr == NULL ||node == NULL)
		return (0);
	else
		return (1);
}
