#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: pointer to string to check
 *@needle: pointer to substring
 *
 *Return: returns pointer to subtring in haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;
		if (needle[j] == '\0')
			return (&haystack[i]);


	}
	return (NULL);
}
