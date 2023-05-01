#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: address of pointer to the head node
 * @n: insert in the new node
 *
 * Return: size of lists, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	listint_t *new_node;
	listint_t *new_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (node->next)
		node = node->next;

	node->next = new_node;

	return (new_node);
}
