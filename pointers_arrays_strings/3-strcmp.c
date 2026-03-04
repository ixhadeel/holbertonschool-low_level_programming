#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: The difference between the first non-matching characters,
 * or 0 if strings are identical.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	/* Loop until we find a difference or reach the end of a string */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			/* Return the difference in ASCII values */
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* Check if one string ended before the other */
	return (s1[i] - s2[i]);
}
