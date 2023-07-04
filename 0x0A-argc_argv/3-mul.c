#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string to be converted
 *
 * Return: the integer converted
 *
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int len = 0;
	int k = 0;
	int num = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len && k == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
			{
				num = -num;
			}
			n = n * 10 + num;

			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			k = 0;
		}
		i++;
		len++;
	}
	if (k == 0 && len == 0)
	{
		return (0);
	}
	return (n);
}

/**
 * main - multiplies two numbers
 *
 * @argc: no. of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success) 1 if not
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
