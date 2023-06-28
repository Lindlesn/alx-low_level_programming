#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 *
 * @n: numbers to be printed
 *
 * Return: nothing
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
		}
	}

	if (n != 98)
	{
		printf(", ");
	}
	printf("\n");
}
