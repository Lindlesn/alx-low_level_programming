#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 *
 * @dest: area for memory to be stored
 * @src: area to copy memory to
 * @n: number of bytes
 *
 * Return: copied memory
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
