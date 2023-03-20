#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @a: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *a)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (s[i] == a[n])
				return (s + i);
		}
	}
	s = 0;
	return (0);
}
