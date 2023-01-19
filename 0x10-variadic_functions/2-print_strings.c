#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a funtion that prints strings followed by a new line.
 * @separator: string separator
 * @n: the number of input strings
 *
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list slist;
	unsigned int i = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(slist, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}

		va_end(slist);
	}

	printf("\n");
}
