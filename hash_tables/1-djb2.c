#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string to hash
 *
 * Return: hash value as a number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* initial magic number for djb2 */
	hash = 5381;

	/* loop through each character of the string */
	while ((c = *str++))
	{
		/* this is the formula: hash * 33 + c */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
