#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to newly allocated space,
 * NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, tlen;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	tlen = len1 + len2 + 1;

	result = (char *)malloc(tlen * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
