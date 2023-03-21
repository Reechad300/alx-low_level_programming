#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @a: parameter to be printed
 * Return: always 0
 */

int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;
	_putchar(k  + '0');
	return (k);
}
