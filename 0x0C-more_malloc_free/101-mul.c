#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - find lenght
 * @str: string
 * Return: len of str
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * create_xarray - create array
 * @size: size
 * Return: size of array
 */

char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';
	return (array);
}

/**
 * iterate-zeroes - i
 * @str: p1
 * Return: ptr to zero element
 */

char *iterate_zeros(char *str)
{
	while (*str && *str == 0)
		str++;
	return (str);
}

/**
 * get_digit - convert digit char
 * @c: p1
 * Return: converted int
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * get_prod - mul a str
 * @prod: p1
 * @mult: p2
 * @digit: p3
 * @zeroes: p4
 * Return: always 0
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	for (; mult_len >= 0; mult_len-, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/** add_nums - add number
 * @final_prod: p1
 * @next_prod: p2
 * @next_len: p3
 * Return: always 0;
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod + (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_prod >= 0 && *next_prod !+ 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*finl_prod = (tens % 10) + '0';
}

/** main - multiple two int
 * @argv: arg vector
 * @argc: arg count
 * Return: alwys 0
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '\0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '\0')
		argv[2] == iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1] + find_len(argv[2]));
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (index = find_len(argv[2] + index ))
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(next_prod);

	return (0);
}
