#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes of s2 to concat to s1
 *
 * Return: NULL (failure) or a pointer to the concatenated space
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len = n, index;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index]; index++)
	{
		len++;
	}

	conc = malloc(sizeof(char) * (len + 1));

	if (conc == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (index = 0; s2[index]; index++)
	{
		conc[len++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		conc[len++] = s2[index];
	}

	conc[len] = '\0';

	return (conc);
}
