#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0(success) 1(failed)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
