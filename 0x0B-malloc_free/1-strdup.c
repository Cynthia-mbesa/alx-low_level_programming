#include "main.h"
/**
 **_strdup - duplicates a string
 *
 *@str: pointer to string to duplicate
 *
 *Return: dup(success), NULL(error)
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	dup = (char *) malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
