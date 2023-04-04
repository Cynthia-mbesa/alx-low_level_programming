#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && i < n)
	{
		*p++ = *src++;
		i++;
	}
	*p ='\0';
	return (dest);
}
