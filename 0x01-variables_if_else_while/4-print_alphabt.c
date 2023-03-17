#include <stdio.h>

/**
 * main - print alphabet expect q and e
 * Return: 0 successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; 'a' <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
