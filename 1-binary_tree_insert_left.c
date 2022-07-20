#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node as the left child of another node
 * @parent: parent node
 * @value: value of the new node
 * Return: a pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		tmpNode->left = parent->left;
		parent->left->parent = tmpNode;
	}
	parent->left = tmpNode;
	return (tmpNode);
}
