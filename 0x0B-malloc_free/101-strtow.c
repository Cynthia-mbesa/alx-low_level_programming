#include "main.h"
/**
 * count_words - Counts words in a string
 * @str: string
 * Return: str(success)
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		} else
		{
			in_word = 0;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: string
 *
 * Return: count(success), NULL(failure)
 */
char **strtow(char *str)
{
	int i, j, k = 0, count = 0, in_word = 0, word_len = 0;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	count = count_words(str);
	words = (char **) malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				word_len = 1;
				j = i;
			}
			else
			{
				word_len++;
			}
		}
		else
		{
			if (in_word)
			{
				words[k] = malloc(sizeof(char) * (word_len + 1));
				if (words[k] == NULL)
				{
					for (k--; k >= 0; k--)
					{
						free(words[k]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[k], &str[j], word_len);
				words[k][word_len] = '\0';
				k++;
				in_word = 0;
			}
		}
	}
	if (in_word)
	{
		words[k] = malloc(sizeof(char) * (word_len + 1));
		if (words[k] == NULL)
		{
			for (k = k - 1; k >= 0; k--)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[k], &str[j], word_len);
		words[k][word_len] = '\0';
		k++;
	}
	words[k] = NULL;
	return (words);
}

