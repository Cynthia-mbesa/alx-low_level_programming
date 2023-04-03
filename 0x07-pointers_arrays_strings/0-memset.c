#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer to the memory
 *@b: character to be filled in s
 *@n: number of bytes
 *Return: returns memory location s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
