#include <stdio.h>
#include "main.h"

/**
 * main - prints the no. of arguments passed to it
 *
 * @argc: no. of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 *
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
