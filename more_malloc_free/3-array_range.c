#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the starting value (included)
 * @max: the ending value (included)
 *
 * Return: pointer to the newly created array, or NULL if fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	/* Calculate size: +1 is needed to include both min and max */
	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
