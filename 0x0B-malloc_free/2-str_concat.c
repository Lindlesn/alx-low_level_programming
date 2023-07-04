#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: input
 * @s2: input
 *
 * Return: 0
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int size2 = (s2 != NULL) ? strlen(s2) : 0;
	char *ptr, *ret;
	
	ret = malloc(size1 + size2 + 1);
	if (!ret)
	{
		return (NULL);
	}

	ptr = ret;
	while (s1 && *s1)
	{
		*ptr++ = *s1++;
	}
	while (s2 && *s2)
	{
		*ptr++ = *s2++;
	}
	*ptr = '\0';
	return (ret);
}
