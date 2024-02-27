#include "binary_tress.h"

/**
 * binary_tree_is_leaf - checks whether a node is a leaf
 *
 * @node: is a pointer to the node to check
 *
 * Return: 1 if node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *new_node;

	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
}