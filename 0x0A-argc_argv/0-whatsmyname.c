#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: no of arguments passed
 * @argv: vector of pointers to strings
 * Return: o
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
