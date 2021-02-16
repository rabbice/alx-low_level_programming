#include "holberton.h"
/**
 * puts_half - print half of string
 * @str: string given
 * Return: second part string or last char if odd
 */
void puts_half(char *str)
{
	int i, y, n, p, length;

	n = 0;
	length = 0;
	for (y = 0; *(str + y) != '\0'; y++)
		length++;
	n = (length - 1) / 2;
	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		p = 0;
		while (p < length)
		{
			if (p > n)
				_putchar(str[p]);
			p++;
		}
	}
	_putchar('\n');
}
