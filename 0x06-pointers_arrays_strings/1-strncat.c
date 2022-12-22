#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: string that is added to
 *@src: string to be appended
 *Return: a pointer to the resulting string @ dest
 */

chat *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int i;

	while (dest[len1] != '\0')
		len1++;

	for (i = 0; i < n; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	return(dest);
}
