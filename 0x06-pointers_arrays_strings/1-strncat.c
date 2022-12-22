#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: a pointer to the resulting string @ dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len2 = 0; 
	int i;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
