#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name of fnx
 * @name: p1
 * @f: p2
 * Return: alwaus 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
