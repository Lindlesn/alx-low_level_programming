#include "main.h"
#include <stdio.h>

/**
 * main - prints the no of args passed to it
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
