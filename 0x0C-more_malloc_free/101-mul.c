#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0(success), 98(error)
 */
int main(int argc, char **argv)
{
	size_t i, len1, len2;
	int carry, n1, k, j, n2;
	int *res;
	char *num1, *num2, *error;

	if (argc != 3)
	{
		error = "Error\n";
		while (*error)
		{
			_putchar(*error++);
		}
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; i < strlen(num1); i++)
	{
		if (!isdigit(num1[i]))
		{
			error = "Error\n";
			while (*error)
			{
				_putchar(*error++);
			}
			return (98);
		}
	}
	for (i = 0; i < strlen(num2); i++)
	{
		if (!isdigit(num2[i]))
		{
			error = "Error\n";
			while (*error)
			{
				_putchar(*error++);
			}
			return (98);
		}
	}
	len1 = strlen(num1);
	len2 = strlen(num2);
	res = calloc(len1 + len2, sizeof(int));
	carry = 0;

	for (i = len1 - 1; i < len1; i--)
	{
		n1 = num1[i] - '0';
		k = len2 + i;
		carry = 0;

		for (j = len2 - 1; j >= 0; j--, k--)
		{
			n2 = num2[j] - '0';
			res[k] += n1 * n2 + carry;
			carry = res[k] / 10;
			res[k] %= 10;
		}
		res[k] += carry;
	}
	i = 0;
	while (i < len1 + len2 && res[i] == 0)
	{
		i++;
	}
	if (i == len1 + len2)
	{
		_putchar('0');
		_putchar('\n');
	} else
	{
		for (; i < len1 + len2; i++)
		{
			_putchar(res[i] + '0');
		}
		_putchar('\n');
	}
	free(res);

	return (0);
}
