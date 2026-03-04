#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string that will receive the append.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int d_len = 0;
	int i = 0;

	/* Find the length of dest (position of the null byte) */
	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	/* Append src to dest, overwriting the original null byte */
	while (src[i] != '\0')
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}

	/* Append the new terminating null byte */
	dest[d_len] = '\0';

	return (dest);
}
