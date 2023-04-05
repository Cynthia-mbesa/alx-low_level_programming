#include "main.h"
/**
 *_strlen_recursion - checks string length
 *@s: string to be checked
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 *_palindrome_helper - checks for palindrome
 *@s: string to check
 *@i: start of string
 *@j: end of string
 *Return: 1(palindrome) 0(not palindrome)
 */
int _palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (_palindrome_helper(s, i + 1, j - 1));
	}
}

/**
 *is_palindrome - checks for palindrome
 *@s: string to check
 *
 *Return: 1, 0, call function _palindrome_helper
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}
	else
	{
		return (_palindrome_helper(s, 0, length - 1));
	}
}
