#include "binary_trees.h"

/**
 * binary_tree_inorder - passes through a binary tree in order order
 * @tree: tree to pass through
 * @f: function to execute on each pass
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*f)(int))
{
	if (!tree || !f)
		return;
	binary_tree_inorder(tree->left, f);
	f(tree->n);
	binary_tree_inorder(tree->right, f);
}
