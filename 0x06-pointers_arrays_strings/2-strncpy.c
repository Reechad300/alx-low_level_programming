#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
