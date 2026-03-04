#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	/* Handle the very first character of the string */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i] != '\0')
	{
		/* Check if current character is a separator */
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				/* If next char is lowercase, capitalize it */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
				break;
			}
		}
		i++;
	}

	return (str);
}
