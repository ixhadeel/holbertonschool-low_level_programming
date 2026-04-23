#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the start of the list
 * @n: the number to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	/* 1. Create the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* 2. Set the data */
	new->n = n;
	new->next = NULL; /* Since it's the last node, next is NULL */

	/* 3. If the list is empty, new node becomes the head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* 4. Otherwise, find the last node */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* 5. Link the last node and the new node together */
	last->next = new;
	new->prev = last;

	return (new);
}
