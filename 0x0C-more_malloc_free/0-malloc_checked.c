#include "main.h"
/**
 **malloc_checked - allocates memory using malloc
 *@b: memory size
 *
 *Return: ptr(success), exit(fail)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return ptr;
}
