#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
