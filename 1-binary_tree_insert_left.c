#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node of the new node
 * @value: Value to assign to the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *aux;

	if (parent == NULL)
	return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	return (NULL);

	newNode->right = NULL;
	newNode->n = value;
	aux = parent->left;
	parent->left = newNode;
	newNode->left = aux;
	newNode->parent = parent;
	if (aux != NULL)
	aux->parent = newNode;
	return (newNode);
}
