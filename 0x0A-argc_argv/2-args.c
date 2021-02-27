#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: value of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
        return (0);
}
