#include "binary_trees.h"

int custom_binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 0 or 1 for perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{
		if (custom_binary_tree_height(tree->left) == 0 &&
			custom_binary_tree_height(tree->right) == 0)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}

/**
 * custom_binary_tree_height - Measure the height
 * of a binary tree from a given node
 * @tree: pointer to node of tree to measure
 * Description: Edited to work with balance factor function
 * Return: height of tree or 0 if NULL
 */
int custom_binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = custom_binary_tree_height(tree->left) + 1;
	right = custom_binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance value or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = custom_binary_tree_height(tree->left);
	right = custom_binary_tree_height(tree->right);

	return (left - right);
}
