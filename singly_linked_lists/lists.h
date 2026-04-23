#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct list_s - structure for a single node
 * @str: string stored in the node
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function to print all elements in the list */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
