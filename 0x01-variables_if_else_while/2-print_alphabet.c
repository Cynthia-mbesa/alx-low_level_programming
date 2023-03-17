#include <stdio.h>
/**
 * main - entry point
 * description - program outpus alphabets in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
