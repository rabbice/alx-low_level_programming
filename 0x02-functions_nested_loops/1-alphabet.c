#include "holberton.h"

void print_alphabet(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
