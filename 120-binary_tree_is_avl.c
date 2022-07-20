#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((l > r) ? l : r);
		}
}

/**
 * bal_avl - Auxiliar function to compare each subtree if its AVL.
 * @tree: node that point to the tree to check.
 * @high: node that point to the higher node selected
 * @lower: node that point to the lower node selected.
 * Return: 1 if tree is AVL, 0 if not.
