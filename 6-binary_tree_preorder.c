#include "binary_trees.h"

/**
 * binary_tree_preorder - parses through a tree in preorder style
 * @tree: tree to parse through
 * @f: funciton to execute on each pass over a node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*f)(int n))
{
	if (!tree || !f)
		return;
	f(tree->n);
	binary_tree_preorder(tree->left, f);
	binary_tree_preorder(tree->right, f);
}
