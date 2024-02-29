#include "binary_trees.h"

/**
 * binary_tree_is_root - chek if the node is a root
 * @node: the given node to check it
 * Return: 1 if success or 0 if fail
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
