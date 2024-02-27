#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child
 *
 * @parent: this is the pointer of the node to insert the child
 * @value: this is the value to store in the new node
 *
 *Return: A pointer to the created node
 *else NULL is parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = left;
	new_node->right = right;
	new_node->parent = parent;

	if (parent != NULL)
	{
		if (parent->left != NULL)
		{
			parent->left->parent = NULL;
			free(parent->left);
		}
		parent->left = new_node;
	}
}
