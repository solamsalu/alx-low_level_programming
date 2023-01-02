#include "main.h"

/**
 * _strspn - Entry point
 * Desc: Entry
 *@s: pointer
 *@a: pointer
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *a)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; a[j] ; j++)
		{
			if (s[i] == a[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != a[j])
		{
			break;
		}
	}
	return (count);
}
