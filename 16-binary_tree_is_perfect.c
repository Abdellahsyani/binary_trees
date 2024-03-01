#include "binary_trees.h"

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


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_is_perfect - function to check if a tree is perfect
 * @tree: the root of tree
 * Return: 0 if success and 1 if fail
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right)
			&& binary_tree_height(tree->left) == binary_tree_height(tree->right));
	}
	return (0);
}
