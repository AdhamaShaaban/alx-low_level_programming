#include "lists.h"

/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
