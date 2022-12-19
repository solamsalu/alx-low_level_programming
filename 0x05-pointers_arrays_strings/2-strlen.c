#include "main.h"
#include <stdio.h>

/**
 *_strlen - is a function to find the length of a string
 *@s: string
 *return: integer.
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
