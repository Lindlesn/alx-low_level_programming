#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be copied
 *
 * Return: NULL if str = NULL,
 * pointer to duplicated string on success or NULL if
 * insufficient memory was available
 *
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
