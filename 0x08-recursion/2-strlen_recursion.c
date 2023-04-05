#include "main.h"
/**
 *_strlen_recursion - returns string length
 *
 *@s: pointer to the string
 *
 *Return: 0 or string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
