#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: A list of types of arguments to print.
 * @...: The list of arguments to print based on format.
 *
 * Return: nothing
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	char current_format;
	char *str;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];
		switch (current_format)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
				break;
				}
		}
		separator = ", ";
		i++;
	}

		printf("\n");
		va_end(args);
}
