#include "main.h"

/**
 * print_line - print long line
 * Return: always
 */

void print_line(int n)
{
	int n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
	for (x = 0; x < n; x++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}
