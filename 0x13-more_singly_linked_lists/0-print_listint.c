#include "lists.h"


/**
 * print_listint - prints all the elements of a linked list
 * @eze: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *eze)

{
	size_t num = 0;

	while (eze)
	{
		printf("%d\n", eze->n);

		num++;

		eze = eze->next;
	}

	return (num);
}
