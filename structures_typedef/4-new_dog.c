#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - new_dog to create a new dog
 * @owner: owner name of type char (pointer)
 * @age: age of dog type float
 * @name: name of dog of type char (pointer)
 * Return: value of dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);
	if (name == NULL)
		ndog->name = NULL;
	else
	{
		ndog->name = malloc(sizeof(strlen(name) + 1));
		if (ndog->name == NULL)
		{
			free(ndog);
			return (NULL);
		}
		ndog->name = strcpy(ndog->name, name);
	}
	if (owner == NULL)
		ndog->owner = NULL;
	
	else
	{
		ndog->owner = malloc(sizeof(strlen(owner) + 1));
		if (ndog->owner == NULL)
		{
			free(ndog->name);
			free(ndog);
			return (NULL);
		}
		ndog->owner = strcpy(ndog->owner, owner);
	}
	ndog->age = age;
	return (ndog);
}
