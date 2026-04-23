#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: pointer to the start of the list
 *
 * Return: the total number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* Loop through the list nodes */
	while (h != NULL)
	{
		count++;     /* increase count for every node found */
		h = h->next; /* move to the next node */
	}

	return (count);
}
