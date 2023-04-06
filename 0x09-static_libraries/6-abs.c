#include "main.h"

/**
 * _abs - absolute value
 * @a: parater to be printed
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n > 0)
		n = n;
	return (n);
}
