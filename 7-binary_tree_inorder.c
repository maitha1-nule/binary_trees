#include"binary_trees.h"

/**
 *binary_tree_inorder - goes through a binary tree using inorder tranversal
 *
 *@tree: rhis is the pointer to thr node
 *@func: this is the fuction pointer
 *
 * Return: nothing if tree and func is NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
