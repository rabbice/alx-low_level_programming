#include "holberton.h"

/**
 * _isupper - check for uppercase characters
 * @c: int checked
 * Return: 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
