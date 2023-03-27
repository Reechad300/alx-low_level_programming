#include "main.h"

/**
<<<<<<< HEAD
 * swap_int - swap the values of two ints
=======
 * swap_int - swap two values
>>>>>>> e0af00af9ed715c89520d2b5ae1721480fc425b7
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
