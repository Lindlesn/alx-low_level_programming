#include "main.h"

/**
 * _strlen_recursion - recursively calculates the length of a string
 *
 * @s: string to be calculated
 *
 * Return: nothing
 *
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
