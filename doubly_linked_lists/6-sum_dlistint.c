#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* 1. If the list is empty, it will skip the loop and return 0 */
	while (head != NULL)
	{
		/* 2. Add the value of the current node to our total sum */
		sum += head->n;

		/* 3. Move to the next node */
		head = head->next;
	}

	/* 4. Return the final total */
	return (sum);
}
