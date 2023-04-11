#include "main.h"
/**
 **create_array - creates an array of chars
 *@size: size of the array
 *@c: initialize each array element with c
 *
 *Return: arr(success), NULL(error)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
