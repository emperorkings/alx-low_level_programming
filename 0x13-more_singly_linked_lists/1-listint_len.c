#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the linked list of type listint_t to traverse.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t crocs = 0;

	while (h)
	{
		crocs++;
		h = h->next;
	}

	return (crocs);
}

