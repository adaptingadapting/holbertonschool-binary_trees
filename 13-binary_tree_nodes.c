#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: tree to count in
 * Return: returns the nodes in tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right));
}
