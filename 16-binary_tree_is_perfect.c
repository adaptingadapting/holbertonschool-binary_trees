#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks for the perfection of a tree
 * @tree: tree to check
 * Return: 1 if perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return ((binary_tree_is_full(tree)) && !(binary_tree_balance(tree)));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to check
 * Return: 1 if full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((tree->left) && !(tree->right) || tree->right && !tree->left)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
