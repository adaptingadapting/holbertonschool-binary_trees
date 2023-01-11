#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of the binary tree
 * @tree: tree to return the size of
 * Return: returns the size of the tree, so how mnay nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_1 = 0;

	if (!tree)
		return (0);
	size_1 += binary_tree_size(tree->left) + 1;
	size_1 += binary_tree_size(tree->right);
	return (size_1);
}
