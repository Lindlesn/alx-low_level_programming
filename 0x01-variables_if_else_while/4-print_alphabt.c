#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Return: 0
 *
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
