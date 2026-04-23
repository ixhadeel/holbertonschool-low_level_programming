#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to find, starting from 0
 *
 * Return: the node at the index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/* 1. Loop through the list until we find the index or reach the end */
	while (head != NULL)
	{
		/* 2. Check if the current position matches the index we want */
		if (count == index)
			return (head);

		/* 3. Move to the next node and increment our counter */
		head = head->next;
		count++;
	}

	/* 4. If we reach here, it means the index was not found */
	return (NULL);
}
