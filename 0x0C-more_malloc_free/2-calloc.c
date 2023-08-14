#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an arroy using malloc
 * @nmemb: number of elements in the array
 * @size: size of element in bytes
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, or if malloc fails, it returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
