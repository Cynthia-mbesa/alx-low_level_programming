#include "main.h"
/**
 *_sqrt_helper - finds the squareroot
 *@n: number to find squareroot of
 *@guess: a guessed value
 *Return: guess(success), -1(error), _sqrt_helper
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}
/**
 *_sqrt_recursion - finds the squareroot
 *@n: number to find squareroot of
 *
 *Return: -1(error), _sqrt_helper
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}
