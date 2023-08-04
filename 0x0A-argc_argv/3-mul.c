#include "main.h"
#include <stdio.h>

/**
 * atoi - converts string to an integer
 *
 * @s: string to be converted
 *
 * Return: the converted integer
 *
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int sign = 1;
	int num;


	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			j = j * 10 + num;
		}
		else
		{
			return (-1);
		}
		i++;
	}
	return (sign * j);
}

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success) 1 if two args not received
 *
 */

int main(int argc, char *argv[])
{
	int prod, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
