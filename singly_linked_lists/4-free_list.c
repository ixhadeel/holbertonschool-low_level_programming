#include "lists.h"
#include <stdlib.h>

/**
 * free_list - clears the memory used by the list
 * @head: pointer to the start of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* Loop until the list is empty */
	while (head != NULL)
	{
		/* 1. Save the next node's address */
		temp = head->next;

		/* 2. Free the string (we used strdup for it) */
		free(head->str);

		/* 3. Free the node structure itself */
		free(head);

		/* 4. Move to the next node we saved earlier */
		head = temp;
	}
}
