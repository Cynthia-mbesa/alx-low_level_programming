#include "main.h"
/**
 **malloc_checked - allocates memory using malloc
 *@b: memory size
 *
 *Return: ptr(success), exit(fail)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr =  malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
