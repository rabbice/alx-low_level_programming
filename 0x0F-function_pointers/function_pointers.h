#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
void print_name(char *name, void (*f)(char *));
#include <stdio.h>
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char);
int int_index(int *array, int size, int (*cmp)(int));
#endif
