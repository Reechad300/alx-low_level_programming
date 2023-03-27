#include "main.h"

/**
 * swap_int - swap the values of two ints
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
