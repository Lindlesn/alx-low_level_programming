#include "main.h"

/**
 * comp - returns power of a number
 *
 * @n: original number
 * @y: counter to compare mult
 *
 * Return: square root
 *
 */

int comp(int n, int y)
{
	int num = 0;

	if (y <= n)
	{
		if (n % y == 0)
		{
			num++;
		}
		return (num + comp(n, y + 1));
	}
	return (num);
}

/**
 * is_prime_number - checks if integer is a prime number
 *
 * @n: number to be checked
 *
 * Return: 1 if number is prime, 0 if not
 *
 */

int is_prime_number(int n)
{
	if (comp(n, 1) == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
