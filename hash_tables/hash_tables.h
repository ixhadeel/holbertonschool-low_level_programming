#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - node for the hash table list
 * @key: the unique key
 * @value: value of the key
 * @next: pointer to the next node
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - the main hash table structure
 * @size: size of our array
 * @array: pointer to the first node
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* prototype */
hash_table_t *hash_table_create(unsigned long int size);

#endif
