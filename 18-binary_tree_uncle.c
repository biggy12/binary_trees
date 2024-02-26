#include "binary_trees.h"

/**
 * binary_tree_uncle - find the sibling of a node
 * @node: pointer to node to find uncle of
 * Return: pointer to uncle node, else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL ||
	    node->parent->parent->right == NULL ||
	    node->parent->parent->left == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
