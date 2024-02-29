#include "binary_trees.h"

/**
 * binary_tree_node - this is a function to create a new node
 * @parent: this is the root of the new node
 * @value: the value of the new node
 *
 * Return: new node if seccusse and NULL if fail
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
