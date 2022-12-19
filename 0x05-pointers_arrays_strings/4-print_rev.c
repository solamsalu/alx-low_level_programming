#include "main.h"

/**
 *_puts - a function that prints a string, in reverse followed by a new line
 *@s: input a string
 *Return: string in reverse
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
