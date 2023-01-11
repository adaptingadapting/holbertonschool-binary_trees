#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);
  
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to check
 * Return: returns 1 if full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
		if (!tree)
			return (0);
		if ((tree->left && tree->right) &&
			binary_tree_is_leaf(tree->left) &&
			binary_tree_is_leaf(tree->right))
			return (1);
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);		
		return (0);
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node of the binary tree
 * Return: 1 if leaf 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right || node->left)
		return (0);
	else
		return (1);
}
