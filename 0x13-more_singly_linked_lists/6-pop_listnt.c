#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to a pointer to the first elem
 * Return: The data inside the element that was
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int emperor;

	if (!head || !*head)
		return (0);

	emperor = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (emperor);
}

