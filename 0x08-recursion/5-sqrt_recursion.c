#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - print sqrt valuw
 * @n: paratmeter 1
 * Return: sqrt value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - print sqrt value
 * @n: number value
 * @i: iterator
 * Return: always 0
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}

