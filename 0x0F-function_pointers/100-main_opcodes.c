#include <stdio.h>
#include <stdlib.h>
void print_opcodes(char *addr, int n);
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, n);

	return (0);
}
/**
 * print_opcodes - Prints the opcodes of a function
 * @addr: Address of the function
 * @n: Number of bytes to print
 */
void print_opcodes(char *addr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", addr[i]);
		if (i != n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
