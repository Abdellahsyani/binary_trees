#include "binary_trees.h"

/***/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	
	count += (tree->left || tree->right ? 1: 0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}

int main(void)
{
	binary_tree_t *root;
	size_t nodes;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	nodes = binary_tree_nodes(root);
	printf("Nodes in %d: %lu\n", root->n, nodes);
	nodes = binary_tree_nodes(root->right);
	printf("Nodes in %d: %lu\n", root->right->n, nodes);
	nodes = binary_tree_nodes(root->left->right);
	printf("Nodes in %d: %lu\n", root->left->right->n, nodes);
	return (0);
}
