#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 *
 * Return: a pointer to the new dog's stucture
 */
 
dog_t *new_dog(char *name, float age, char *owner)
 {
	dog_t *pupp;

	pupp = malloc(sizeof(dog_t));
	if (pupp == NULL)
		return (NULL);

	pupp->name = name;
	pupp->owner = owner;
	pupp->age = age;
    
	return (pupp);
 }
