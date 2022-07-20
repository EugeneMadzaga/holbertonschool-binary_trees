#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		tmpNode->right = parent->right;
		parent->right->parent = tmpNode;
	}
	parent->right = tmpNode;
	return (tmpNode);
}
