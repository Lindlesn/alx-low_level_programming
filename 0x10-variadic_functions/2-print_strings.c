#include "variadic_functions.h"

/**
 * print_strings - Print strings
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The list of strings.
 *
 * Return: nothing
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
