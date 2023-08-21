#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: pointer of the string to be searched
 *@accept: pointer to comparison string
 *
 *Return: s+i or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
