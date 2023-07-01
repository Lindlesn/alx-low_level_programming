#include "main.h"

/**
 * _strstr - finds needle in the string haystack
 *
 * @haystack: string to be searched
 * @needle: substring to be found
 *
 * Return: 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *i != '\0')
		{
			i++;
			j++;
		}
		if (*i == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
