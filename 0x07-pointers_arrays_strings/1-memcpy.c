#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	for (r = 0; r < 1; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

