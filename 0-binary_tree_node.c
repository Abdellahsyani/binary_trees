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
	binary_tree_t *newNode = malloc(sizeof (binary_tree_t));
	if (newNode == NULL)
		return NULL;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	return newNode;
}

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);

	root->left = binary_tree_node(root, 12);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 16);

	root->right = binary_tree_node(root, 402);
	root->right->left = binary_tree_node(root->right, 256);
	root->right->right = binary_tree_node(root->right, 512);

	binary_tree_print(root);
	return (0);
}
