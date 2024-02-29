#include "binary_trees.h"

/**
 * binary_tree_insert_right - funtion to insert a node to right
 * @root: the root of tree
 * @value: the value of new_node
 *
 * Return: NULL if fail and node if success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *root, int value)
{
	binary_tree_t *new_node;

	if (root == NULL)
		return (NULL);

	new_node = binary_tree_node(root, value);
	if (new_node == NULL)
		return (NULL);

	if (root->right != NULL)
	{
		root->right->parent = new_node;
		new_node->right = root->right;
		root->right = new_node;
	}
	else
	{
		root->right = new_node;
	}
	return (new_node);
}
