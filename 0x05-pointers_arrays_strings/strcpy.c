#include "main.h"

/**
 * *_strcpy - copy functions in a string
 * @dest: prameter 1
 * @src: parameter 2
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL) return NULL;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
