#include "binary_trees.h"

/**
 * binary_tree_node - creates a node on a binary tree
 * @parent: parent of the current node
 * @value: alue to put in the data structure
 * Return: a pointer to the created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
