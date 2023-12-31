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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		dog->name = NULL;
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}


