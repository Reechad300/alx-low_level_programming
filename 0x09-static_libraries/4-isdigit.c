#include "main.h"

/**
 * _isdigit - print digits 0 to 9
 * @i: parameter
 * Return: always 0
 */

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	return (0);
}
