#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 *
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	i = 'A';

	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
