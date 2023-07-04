#include "main.h"
#include <stdlib.h>
#include <string.h>

int count_words(char *s);
char **strtow(char *str);

/**
 * count_words - counts the words in string s
 *
 * @s: string to be checked
 *
 * Return: word count
 *
 */

int count_words(char *s)
{
	int j, k;

	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
		{
			k++;
		}
	}
	return (k);
}

/**
 * strtow - splits a string into words
 *
 * @str: string to be split
 *
 * Return: 0 (success), NULL (failure)
 *
 */

char **strtow(char *str)
{

	int i, j = 0, k, wl, start;
	int len = strlen(str);
	int wc = count_words(str);
	char **words = malloc((wc + 1) * sizeof(char *));

	if (wc == 0)
	{
		return (NULL);
	}
	if (words == NULL)
	{
		return (NULL);
	}
	if (str == 0 || *str == '\0')
	{
		return (NULL);
	}

	while (i < len)
	{
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		if ( i < len && str[i] != ' ')
		{
			start = i;

			wl = 0;

			while (i < len && str[i] != ' ')
			{
				i++;
				wl++;
			}
			words[j] = malloc((wl + 1) * sizeof(char));

			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
				{
					free(words[k]);
				}
				free(words);

				return (NULL);
			}

			strncpy(words[j], str + start, wl);
			words[j][wl] = '\0';

			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
