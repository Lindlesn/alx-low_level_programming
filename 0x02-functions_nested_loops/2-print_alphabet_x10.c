#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: nothing
 *
 */

void print_alphabet_x10(void);
{
	int i = 'a';

	for (j = i; j <= 10; j++)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}	
