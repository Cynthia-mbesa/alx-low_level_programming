#include "main.h"
/**
 * _isupper - check if a letter is upper
 * @c: the number to be checked
 * Return: 1 for upper letter and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
