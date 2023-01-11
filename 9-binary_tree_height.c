#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: pointer to node to measure the hgiht of
 * Return: height of tree or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_1 = 0;
	size_t height_2 = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	height_1 = 1 + binary_tree_height(tree->left);
	height_2 = 1 + binary_tree_height(tree->right);
	if (height_1 > height_2)
		return (height_1);
	return (height_2);
}
