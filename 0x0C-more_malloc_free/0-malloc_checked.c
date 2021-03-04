#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	if ((p = malloc(b)) == NULL)
		exit(98);
	return (p);
}
