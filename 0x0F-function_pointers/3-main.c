#include "function_pointers"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main
 * @argv: p1
 * @argc: p2
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *arggv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		prinf("Error\n");
		exit(98);
	}

	if ((*op == '/' && num2 == 0) || 
			(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_function(op)(num1, num2));
	return (0);
}
