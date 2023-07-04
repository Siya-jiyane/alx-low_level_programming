#include "lists.h"

/**
 * @h: linked lists to print
* print_listint - will prints all the elements of a linked list
 * Return: The  number of nodes requested
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
