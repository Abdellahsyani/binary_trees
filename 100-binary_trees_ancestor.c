#include "binary_trees.h"

/**
 * binary_trees_ancestor - function to return common ancestor
 * @first: the first node
 * @second: the second node
 * Return: NULL if fail and nodes if success
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *first_ances = first;
	const binary_tree_t *second_ances = second;

	if (first_ances == NULL && second_ances == NULL)
		return (NULL);

	while (first_ances != NULL)
	{
		second_ances = second;
		while (second_ances != NULL)
		{
			if (first_ances == second_ances)
				return ((binary_tree_t *)first_ances);
			second_ances = second_ances->parent;
		}
		first_ances = first_ances->parent;
	}
	return (NULL);
}
