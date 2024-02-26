/**
 * binary_tree_preorder - Performs pre-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }

    /* Visit the root node */
    func(tree->n);

    /* Traverse left subtree */
    binary_tree_preorder(tree->left, func);

    /* Traverse right subtree */
    binary_tree_preorder(tree->right, func);
}
