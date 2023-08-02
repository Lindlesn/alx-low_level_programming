#include "main.h"

/**
 * comp - returns the power of a number
 *
 * @n: original number
 * @y: counter to compare multiplication
 *
 * Return: square root
 *
 */

int comp(int n, int y)
{
	if ((y * y) == n)
	{
		return (y);
	}
	else if ((y * y) > n)
	{
		return (-1);
	}
	return (comp(n, y + 1));
}

/**
 * _sqrt_recursion - recursively returns the natural square root of a number
 *
 * @n: number to find the square root of
 *
 * Return: square root of a number
 *
 */

int _sqrt_recursion(int n)
{
	return (comp(n, 1));
}
