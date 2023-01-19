#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list slist;
	
	if (n > 0)
	{
		va_start(slist, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(slist, int));
			
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(slist);
	}
	printf("\n");
}
