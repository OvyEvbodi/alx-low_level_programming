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
	{
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		exit(EXIT_SUCCESS);
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
