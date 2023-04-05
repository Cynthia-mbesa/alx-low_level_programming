#include "main.h"
/**
 *is_prime_helper - checks for divisors
 *
 *@n: number to be checked
 *@divisor: checks if divisible
 *
 *Return: 1(prime), 0(not prime)
 */
int is_prime_helper(int n, int divisor)
{
	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}
	else if (divisor > n / 2)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor + 1));
	}
}
/**
 * is_prime_number - checks for prime numbers
 * @n: number to be checked
 * Return: calls function is_prime_helper
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

