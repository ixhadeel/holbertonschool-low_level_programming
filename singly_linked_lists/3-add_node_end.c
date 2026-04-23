#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of the list
 * @head: double pointer to the start of the list
 * @str: string to put in the new node
 *
 * Return: address of the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	/* 1. Calculate string length */
	while (str[len])
		len++;

	/* 2. Create the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL; /* because it will be the last one */

	/* 3. If the list is empty, make new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* 4. Otherwise, go to the last node */
	while (temp->next != NULL)
		temp = temp->next;

	/* 5. Connect the last node to our new node */
	temp->next = new_node;

	return (new_node);
}
