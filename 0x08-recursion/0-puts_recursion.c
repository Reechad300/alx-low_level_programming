#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: parameter 1
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
