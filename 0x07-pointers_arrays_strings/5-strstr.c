#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds needle in the string haystack
 *
 * @haystack: string to be searched
 * @needle: substring to be found
 *
 * Return: pointer to needle or null if not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}

	}
	return (NULL);
}
