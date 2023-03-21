#include "main.h"

/**
 * main - serch for lower case alphabets
 * @c: parament to be printed
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
