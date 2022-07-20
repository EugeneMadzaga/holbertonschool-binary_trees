#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: a pointer to the new node or NULL if it fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmpNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (tmpNode == NULL)
		return (NULL);
	tmpNode->n = value;
	tmpNode->parent = parent;
	tmpNode->left = NULL;
	tmpNode->right = NULL;

	if (!value)
		return (NULL);

	parent = tmpNode;
	return (tmpNode);
}
