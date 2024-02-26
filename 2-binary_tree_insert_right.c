#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
    {
        return NULL;
    }

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return NULL;
    }

    /* Handle existing right child */
    if (parent->right != NULL)
    {
        parent->right->parent = new_node;
        new_node->right = parent->right;
    }

    parent->right = new_node;

    return new_node;
}
