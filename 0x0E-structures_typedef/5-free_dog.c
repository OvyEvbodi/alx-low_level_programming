#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the space that was
 * previously allocated to a dog variable
 *
 * @d: the dog variable
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
