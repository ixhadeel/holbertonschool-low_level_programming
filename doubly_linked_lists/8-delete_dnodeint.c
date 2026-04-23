#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	/* 1. If we need to delete the first node (index 0) */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* 2. Traverse to find the node at the specific index */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* 3. If index is out of range */
	if (temp == NULL)
		return (-1);

	/* 4. Link the surrounding nodes together */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	/* 5. Free the memory of the deleted node */
	free(temp);
	return (1);
}
