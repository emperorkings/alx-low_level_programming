#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, considering loops.
 * @h: Pointer to the pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t elements_freed = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			elements_freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			elements_freed++;
			break;
		}
	}

	*h = NULL;
	return (elements_freed);
}

