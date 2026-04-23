#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: integer data for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	/* 1. If index is 0, use your existing function to add at start */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* 2. Traverse the list to find the node before the target index */
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	/* 3. If we reached the end but didn't reach the index, return NULL */
	if (temp == NULL)
		return (NULL);

	/* 4. If the target index is the end of the list, use your end function */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* 5. Otherwise, insert in the middle */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
