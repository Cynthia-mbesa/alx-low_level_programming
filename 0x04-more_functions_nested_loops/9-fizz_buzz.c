#include <stdio.h>
/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" ");
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" ");
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" ");
			printf("Fizz");
		}
		else
		{
			printf(" ");
			printf("%d", i);
		}
	}
	return (0);
}
