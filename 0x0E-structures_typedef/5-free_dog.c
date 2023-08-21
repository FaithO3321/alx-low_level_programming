#include "dog.h"
/**
 * free_dog - function that freed dogs
 * @d: pointer to the parameters for freeing dogs
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
