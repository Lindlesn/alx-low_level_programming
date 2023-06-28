#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: nothing
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k = i * j;

			if (k <= 9)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k <= 9 && j != 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}