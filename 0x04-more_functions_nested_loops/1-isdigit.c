#include "main.h"
/**
 *_isdigit - check for digits
 *@c: the value to be checked
 *Return: 1 for digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
