#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: the int converted from the string
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
	}
	if (k == 0)
	{
		return (0);
	}
	return (n);
}
