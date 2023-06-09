#include "main.h"
/**
 *_strchr - return location of c
 *@s: pointer to a string
 *@c: character to be found
 *
 *Return: s or null
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
