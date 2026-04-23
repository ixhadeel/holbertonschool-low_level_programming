#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: the total number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/* Check if string is NULL and print nil */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		/* Move to the next node and increment count */
		h = h->next;
		count++;
	}

	return (count);
}
