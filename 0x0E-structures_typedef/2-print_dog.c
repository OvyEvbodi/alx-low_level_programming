#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the properties of a dog
 * @d:the dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (!(d->age))
		printf("Name: %s\n Age: (nil)\n Owner: %s\n", d->name, d->owner);
	else
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
