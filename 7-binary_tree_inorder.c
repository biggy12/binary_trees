void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }

    /* Traverse left subtree */
    binary_tree_inorder(tree->left, func);

    /* Visit the root node */
    func(tree->n);

    /* Traverse right subtree */
    binary_tree_inorder(tree->right, func);
}
