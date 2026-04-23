#include "lists.h"

/**
 * list_len - counts how many nodes are in the list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes found
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	/* Loop through the list until we hit NULL */
	while (h != NULL)
	{
		n++;        /* count this node */
		h = h->next; /* move to the next one */
	}

	return (n);
}
