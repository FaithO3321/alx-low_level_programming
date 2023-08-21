#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: new name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog, NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		dog->name = NULL;
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}


