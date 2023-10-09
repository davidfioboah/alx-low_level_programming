#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size of the allocated space for ptr.
 * @new_size: The size of the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memb;
	char *ptr_cpy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memb = malloc(new_size);

		if (memb == NULL)
			return (NULL);

		return (memb);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;
	memb = malloc(sizeof(*ptr_cpy) * new_size);

	if (memb == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memb;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_cpy++;

	free(ptr);
	return (memb);
}
