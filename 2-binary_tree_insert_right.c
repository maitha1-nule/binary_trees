#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right child
 *
 * @parent: this is a pointer to the node to insert the child in
 * @value: the value to insert in the node
 *
 * Return: a pointer to the node created or NULL
 * if parent is NULL and in a case where the right node
 * has a child, replace it
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
