#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - allocates memory block using malloc and free
 * @ptr: pointer to the memory previosly allocated with malloc
 * @old_size: The size of the allocated space of ptr
 * @new_size: The new size to allocate
 * Return: A pointer to the new allocated memory and free ptr.
 */
void *_realoc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);
}
