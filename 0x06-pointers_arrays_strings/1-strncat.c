#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int i;

	while (dest[len1] != '\0')
		len1++;

	for (i = 0; src[i] && i < n; i++)
		dest[len1] = src[i];
		len1++;

	return (dest);
}
