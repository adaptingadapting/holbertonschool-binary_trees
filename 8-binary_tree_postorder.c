#include "binary_trees.h"

/**
 * binary_tree_postorder - passes through a tree in postorder
 * @tree: tree to pass through
 * @f: function to execute on each pass on tree->n
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*f)(int))
{
	if (!tree || !f)
		return;
	binary_tree_postorder(tree->left, f);
	binary_tree_postorder(tree->right, f);
	f(tree->n);
}
