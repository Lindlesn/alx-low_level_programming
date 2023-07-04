#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space
 *
 *
 * @str: string
 *
 * Return: pointer to array of characters
 *
 */

char *_strdup(char *str)
{
	char *strc;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	strc = (char *)malloc(sizeof(char) * (i + 1));
	if (strc == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		strc[j] = str[j];
	}
	return (strc);
}
