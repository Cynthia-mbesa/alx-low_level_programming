#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int num_bytes = atoi(argv[1]);
	
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	
	unsigned char *opcodes = (unsigned char *) main;
	
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]);
	}
	printf("\n");
	
	return (0);
}
