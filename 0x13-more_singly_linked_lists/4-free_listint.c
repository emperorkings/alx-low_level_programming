#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the first node in the list.
 */
void free_listint(listint_t *head)
{
	listint_t *king;

	while (head)
	{
		king = head->next;
		free(head);
		head = king;
	}
}

