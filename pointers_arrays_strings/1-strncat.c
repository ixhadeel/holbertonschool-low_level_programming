#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value (maximum bytes to be used)
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	/* Find the end of dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	/* Append src to dest, but only up to n bytes or end of src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Always ensure the string is null-terminated */
	dest[i] = '\0';

	return (dest);
}
