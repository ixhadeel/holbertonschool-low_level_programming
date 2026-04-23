#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of a doubly linked list
 * @head: double pointer to the start of the list
 * @n: the number to put in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* 1. Create space for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* 2. Put the data in and set the pointers */
	new->n = n;
	new->prev = NULL;   /* because it's going to be the first one */
	new->next = *head;  /* it points to the old head */

	/* 3. Important: if the list wasn't empty, update the old head's prev */
	if (*head != NULL)
		(*head)->prev = new;

	/* 4. Move the head to point to our new node */
	*head = new;

	return (new);
}
