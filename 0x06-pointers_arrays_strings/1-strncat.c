#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: first string
 *@src: second string
 *@n: number of bytes
 *Return: the address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0' && p - dest < n)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
