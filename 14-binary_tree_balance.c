#include "binary_trees.h"

/**
 * binary_tree_balance - function to count blance of a tree
 * @tree: the root of tree
 * Return: the difference between balanced
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	//int left, right;

	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left)) - (binary_tree_height(tree->right));
}

/**
 * binary_tree_height - the function to calculate the height of tree
 * @tree: the root of tree
 * Return: the height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);


	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left_height > right_height) ? left_height : right_height);
}

int main(void)
{
	binary_tree_t *root;
	int balance;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_insert_left(root, 45);
	binary_tree_insert_right(root->left, 50);
	binary_tree_insert_left(root->left->left, 10);
	binary_tree_insert_left(root->left->left->left, 8);
	binary_tree_print(root);

	balance = binary_tree_balance(root);
	printf("Balance of %d: %+d\n", root->n, balance);
	balance = binary_tree_balance(root->right);
	printf("Balance of %d: %+d\n", root->right->n, balance);
	balance = binary_tree_balance(root->left->left->right);
	printf("Balance of %d: %+d\n", root->left->left->right->n, balance);
	return (0);
}
