#include "binary_trees.h"

size_t binary_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
  
/**
 * binary_tree_is_perfect - checks for the perfection of a tree
 * @tree: tree to check
 * Return: 1 if perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_is_full(tree) && (!binary_tree_balance(tree)));
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

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_balance - returns the balance of the tree
 * @tree: tree to parse through
 * Return: the height of the left subtree minus the height of the right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_height(tree->left) - binary_height(tree->right));
}

/**
 * binary_height - returns the height of a binary tree
 * @tree: pointer to node to measure the hgiht of
 * Return: height of tree or 0
 */

size_t binary_height(const binary_tree_t *tree)
{
	size_t height_1 = 0;
	size_t height_2 = 0;

	if (!tree)
		return (0);
	height_1 = 1 + binary_height(tree->left);
	height_2 = 1 + binary_height(tree->right);
	if (height_1 > height_2)
		return (height_1);
	return (height_2);
}
