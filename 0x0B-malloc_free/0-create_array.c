#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializing with specific char
 * @size: the desired size of the array
 * @c: the value with which the array should be initialied
 *
 * Return: NULL if size is 0 or memory allocation fails, otherwise 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size);
	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
