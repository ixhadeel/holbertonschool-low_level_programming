#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: Destination buffer
 * @src: Source string to be copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	/* Copy characters from src to dest up to n bytes */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Fill the rest of dest with null bytes if n > length of src */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
