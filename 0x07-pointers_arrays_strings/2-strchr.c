#include "main.h"

/**
 * _strchr - locate charater
 * @s: parameter 1
 * @c: parameter 2
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
