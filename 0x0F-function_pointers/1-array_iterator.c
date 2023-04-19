#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - count
 * @action: p1
 * @size: p2
 * @array: p3
 * Return: always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
