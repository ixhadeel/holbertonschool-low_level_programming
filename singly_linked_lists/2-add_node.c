#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the start of the list
 * @head: double pointer to the start of the list
 * @str: the string to put in the node
 *
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	/* 1. Calculate length of the string */
	while (str[length])
		length++;

	/* 2. Create space for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* 3. Copy the string and set length */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = length;

	/* 4. Make the new node point to the old head */
	new_node->next = *head;

	/* 5. Move the head to point to our new node */
	*head = new_node;

	return (new_node);
}
