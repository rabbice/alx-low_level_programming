#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: value of integer
 */

int _atoi(char *s)
{
	int i, j, m, n;

	i = m = 0;
	n = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			n *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		m = m * 10 + n * (*(s + j) - '0');
		j++;
	}
	return (n);
}
