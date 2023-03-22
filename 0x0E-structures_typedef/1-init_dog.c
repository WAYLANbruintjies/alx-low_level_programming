#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes struct dog
 * @d: pointer to struct dog
 * @name: to be initialized
 * @age: to be initialized
 * @owner: to be initialized
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
