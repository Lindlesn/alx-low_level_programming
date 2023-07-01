#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 *
 * @s: starting address
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: s with new value
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
