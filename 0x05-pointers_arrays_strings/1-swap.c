#include "main.h"

/**
 *swap_int - a function that swaps two interger values
 *
 *Return: integers.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
