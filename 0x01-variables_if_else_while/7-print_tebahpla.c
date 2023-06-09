#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
