#include "main.h"

/**
 * _strspn - get the lenght of a substring
 * @s: parameter 1
 * @accept:  paramter 2
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;

	}
	return (0);
}

