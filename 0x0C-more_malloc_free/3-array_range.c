#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++; min++)
		ptr[i] = min;
	return (ptr);
}
