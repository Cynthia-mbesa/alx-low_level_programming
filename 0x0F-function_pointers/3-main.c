#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func || (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%')))
	{
		printf("Error\n");
		exit((argv[2][0] == '/' || argv[2][0] == '%') ? 100 : 99);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
