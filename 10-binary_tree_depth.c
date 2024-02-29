#include"binary_trees.h"

/**
 *binary_tree_depth - rhis fuction returns rhr depth of a tree
 *
 *@tree: this is the tree check thr depth
 *
 *Return: if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

