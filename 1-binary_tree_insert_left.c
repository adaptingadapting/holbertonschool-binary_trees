#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left
 * @parent: parent of the new node
 * @n: value to insert
 * Return: returns a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int n)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
		parent->left = new_node;
	return (new_node);
}
