#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - prints concatenate string;
 * @s1: input string.
 * @s2: input string.
 * @n: len s2 string for print.
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, i, j;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	m = 0;
	while (s1[m])
		m++;

	a = malloc(sizeof(*a) * m + n + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (m + n); i++)
	{
		if (i < m)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[j++];
		}
	}
	a[i] = '\0';
	return (a);
}
