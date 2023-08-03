#include "main.h"

/**
 * check_len - checks length of a string
 *
 * @s:  string to be checked
 *
 * Return: String length
 *
 */

int check_len(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (check_len(s + 1) + 1);
}

/**
 * comp - checks power of a number
 *
 * @n: original number
 * @k: counter to compare mult
 * @s: string
 *
 * Return: square root
 *
 */

int comp(int n, int k, char *s)
{
	if (n >= k)
	{
		return (1);
	}
	else if (s[n] == s[k])
	{
		return (comp(n + 1, k - 1, s));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if a string is a palindrom
 *
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome, 0 if not
 *
 */

int is_palindrome(char *s)
{
	int len = check_len(s);

	return (comp(0, len - 1, s));
}
