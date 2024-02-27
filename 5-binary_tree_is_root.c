#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: pointer to the node to chech
 *
 * Return: 1 if a root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	binary_tree_t *new_node;

	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
}