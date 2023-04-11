#include "main.h"
#include <stdlib.h>

/**
 * create_array - print an array
 * @size: parameter 1
 * @c: parameter 2
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
