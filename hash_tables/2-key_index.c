#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the key to get the index for
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* Get the long hash number from djb2 */
	hash = hash_djb2(key);

	/* Use modulo to keep the index within array size */
	return (hash % size);
}
