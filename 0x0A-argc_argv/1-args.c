#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: value of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
