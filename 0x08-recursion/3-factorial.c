#include "main.h"
/**
 *factorial - returns factorial of a given number
 *@n: the given number
 *
 *Return: 1(0!), -1(error), n!
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
