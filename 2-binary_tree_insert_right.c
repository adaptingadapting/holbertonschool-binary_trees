#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the left
 * @parent: parent of the new node
 * @n: value to insert
 * Return: returns a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int n)
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
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
