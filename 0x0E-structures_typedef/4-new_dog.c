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

	pupp->name = _strdup(name);
	pupp->owner = _strdup(owner);
	pupp->age = age;
    
	return (pupp);
 }

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string to copy
 *
 * Return: a pointer to the new string on success,
 * otherwise NULL
 */

char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	new_str = (char *) malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < len; i++)
		{
			new_str[i] = str[i];
		}
	}
	return (new_str);
}
