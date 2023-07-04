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
	char **mat, *tmp;

	int i, j = 0, len = 0, wc, k = 0, start;

	len = strlen(str);

	wc = count_words(str);
	if (wc == 0)
	{
		return (NULL);
	}

	mat = (char **)malloc(sizeof(char *) * (wc + 1));
	if (mat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				tmp = (char *)malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				memcpy(tmp, &str[start], k);
				tmp[k] = '\0';
				mat[j] = tmp;
				j++;

				k = 0;
			}
		}
		else if (k++ == 0)
		{
			start = i;
		}
	}
	mat[j] = NULL;
	return (mat);
}
