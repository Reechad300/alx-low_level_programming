#include <stdio.h>

/**
 * main - print size of computer
 * Return: return 0 when successful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
