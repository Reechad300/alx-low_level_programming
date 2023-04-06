#include "main.h"

/**
 * main - print all alphabet both upper and lower
 * @c: parameter to be checked
 * Return: return 1 if successful otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
