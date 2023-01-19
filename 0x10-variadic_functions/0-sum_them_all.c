#include "vriadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the numbers of items
 * Return: the sum of the items
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list slist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(slist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(slist, const unsigned int);
	}

	va_end(slist);

	return (sum);
}
