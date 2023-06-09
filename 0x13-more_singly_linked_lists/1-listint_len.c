#include "lists.h"

/**
 * listint_len -will only return number of elements in a linked lists.
 * @h: linked list transverse
 *
 * Return: will number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

