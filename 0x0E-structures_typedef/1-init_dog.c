#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: point to struct dog variables
 * Description: this function initializes the members
 * of struct dog uwing provided arguments
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
