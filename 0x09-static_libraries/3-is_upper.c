#include "main.h"

/**
 * _isupper - print upper case alphabets
 * @x: parameter
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
