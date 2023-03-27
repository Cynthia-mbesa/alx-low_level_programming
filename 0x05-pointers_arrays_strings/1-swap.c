#include "main.h"
/**
 *swap_int - swaps the value of two numbers
 *@a: first number
 *@b: second number
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
