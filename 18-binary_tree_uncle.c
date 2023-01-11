#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (binary_tree_sibling(node->parent))
		return (binary_tree_sibling(node->parent));
	return (NULL);
}

/**
 * binary_tree_sibling - finds the sibling of a binary t node
 * @node: node to find sibling from
 * Return: returns the sibling a pointer to it i should say
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		return (NULL);
	}
	if (node->parent->left != node)
	{
		if (node->parent->left)
			return (node->parent->left);
		return (NULL);
	}
	return (NULL);
}
