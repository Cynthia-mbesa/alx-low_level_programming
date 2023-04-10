#include <stdio.h>
/**
 *main - entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
