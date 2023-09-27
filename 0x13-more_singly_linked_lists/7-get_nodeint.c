#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 * @head: Pointer to the first node in the linke.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node at the specified index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current_node = head;

	while (current_node && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}

	return (current_node ? current_node : NULL);
}

