#include "hash_tables.h"

/**
 * hash_table_create - function that creates a new hash table
 * @size: the size we want for the array
 *
 * Return: pointer to the table or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int idx;

	/* check if size is valid */
	if (size == 0)
		return (NULL);

	/* allocate memory for the table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;

	/* allocate memory for the array of pointers */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* initialize all array elements to NULL */
	for (idx = 0; idx < size; idx++)
	{
		new_table->array[idx] = NULL;
	}

	return (new_table);
}
