#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/* Print the number inside the current node */
		printf("%d\n", h->n);

		/* Move to the next node */
		h = h->next;

		/* Increment our counter */
		count++;
	}

	return (count);
}
