#include "main.h"

/**
 *_puts - a function that prints a string, in reverse followed by a new line
 *@s: input a string
 *Return: string in reverse
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
