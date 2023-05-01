#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: address of pointer to the head node
 * @n: str field of node
 *
 * Return: size of list
 */
lsit_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = malloc(sizeof(list_t));
		if (!new_node->str)
		{
			new_node->str = strdup(str);
			if (!new_node->str)
			{
				free(new_node);
				return (NULL);
			}
			new_node->len = _strlen(new_node->str);
		}
		if (node)
		{
			while (node->next)
				node = new->next;
			node->next = new_node;
		}
		else
			*head = new_node;
		return (new_node);
	}
