#include "main.h"

/**
 * swap_int - swap two values
 * @a: parameter 1
 * @b: parameter 2
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
