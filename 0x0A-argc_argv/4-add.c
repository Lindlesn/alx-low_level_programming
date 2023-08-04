#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks string for digits
 *
 * @str: string to be checked
 *
 * Return: 0
 *
 */

int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * 
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 if an error
 *
 */

int main(int argc, char *argv[])
{
	int i, conv, sum;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			conv = atoi(argv[i]);
			sum += conv;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
