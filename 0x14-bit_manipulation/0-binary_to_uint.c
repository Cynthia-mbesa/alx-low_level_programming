#include "main.h"
/**
 *binary_to_uint - converts binary to unsigned int
 *
 *@b: pointer to a string
 *
 *Return: 0 or i
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		i = i * 2 + (b[j] - '0');
	}
	return (i);
}
