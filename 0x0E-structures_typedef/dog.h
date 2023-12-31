#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - aias for for structure with name dog
 * @name: name of dog
 * @owner: dog owner
 * @age: age of the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
