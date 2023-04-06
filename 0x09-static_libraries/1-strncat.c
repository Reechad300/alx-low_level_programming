#include "main.h"

/**
 * _strncat - concatenate two strings with n
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; i != '\0'; i++)
		destlen++;
	for (i = 0; i != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
