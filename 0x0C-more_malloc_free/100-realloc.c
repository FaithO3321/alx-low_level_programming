#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the old memory block in bytes
 * @new_size: New size of the memory block in bytes
 * Return: A pointer to the reallocated memory block
 * If new_size is zero, it returns NULL and frees the old memory block.
 * If malloc fails, it returns NULL and leaves the old memory block intact.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr	= malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	memcpy(new_ptr, ptr, old_size);

	free(ptr);
	return (new_ptr);
}
