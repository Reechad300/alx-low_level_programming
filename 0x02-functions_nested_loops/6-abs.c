#include "main.h"

/**
 * _abs - absolute value
 * @a: parater to be printed
 * Return: always 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a > 0)
		a = a;
	return (a);
}
