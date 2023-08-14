#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - assigns memory using malloc
 * @b: number of bytes to be assigned
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
