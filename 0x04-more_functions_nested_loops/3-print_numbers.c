#include "main.h"

/**
 * print_numbers - print numbers
 * Return: always 0
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
}
