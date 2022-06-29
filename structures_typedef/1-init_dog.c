#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init_dog is a function to initialize dog informations
 * @d: structure dog (pointer)
 * @owner: owner name of type char (pointer)
 * @age: age of dog type float
 * @name: name of dog of type char (pointer)
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
