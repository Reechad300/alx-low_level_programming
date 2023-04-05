#include "main.h"

/**
 * factorial - print factorial
 * @n: parameter 1
 * Return: always 0
 */

int factorial(int n)
{
	if (n < 1)
		return (-1);
	if (n <= 1)
		return (1);
	return (n + factorial(n - 1));
}
