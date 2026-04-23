#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		/* 1. Store the address of the next node */
		next_node = head->next;

		/* 2. Free the current node */
		free(head);

		/* 3. Move to the stored next node */
		head = next_node;
	}
}
