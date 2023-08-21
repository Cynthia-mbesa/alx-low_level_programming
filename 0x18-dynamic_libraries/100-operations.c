#include <stdio.h>
/**
 *  add - adds two numbers
 *  @a: first number
 *  @b: second number
 *  Return: returns the sum of those number
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: returns the difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: returns the multiple
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: returns the value of division, or error
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar(':');
		_putchar(' ');
		_putchar('D');
		_putchar('i');
		_putchar('v');
		_putchar('i');
		_putchar('s');
		_putchar('i');
		_putchar('o');
		_putchar('n');
		_putchar(' ');
		_putchar('b');
		_putchar('y');
		_putchar(' ');
		_putchar('z');
		_putchar('e');
		_putchar('r');
		_putchar('o');
		_putchar('.');
		_putchar('\n');
		return (0);
	}
}

/**
 * mod - returns the modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: the modulus, or error message
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar(':');
		_putchar(' ');
		_putchar('D');
		_putchar('i');
		_putchar('v');
		_putchar('i');
		_putchar('s');
		_putchar('i');
		_putchar('o');
		_putchar('n');
		_putchar(' ');
		_putchar('b');
		_putchar('y');
		_putchar(' ');
		_putchar('z');
		_putchar('e');
		_putchar('r');
		_putchar('o');
		_putchar('.');
		_putchar('\n');
		return (0);
	}
}
