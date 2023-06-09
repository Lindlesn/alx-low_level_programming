#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to n
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d", n);
	printf(" is ");

	n = n % 10;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}


	if (n == 0)
	{
		printf("%d and is zero\n", n);
	}

	if (n < 6)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}


	return (0);
}
