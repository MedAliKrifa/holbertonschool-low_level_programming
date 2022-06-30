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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		dog->name = NULL;
	}
	else
	{
		dog->name = malloc(sizeof(strlen(name) + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->name = strcpy(dog->name, name);
	}
	if (owner == NULL)
	{
		dog->owner = NULL;
	}
	else
	{
		dog->owner = malloc(sizeof(strlen(owner) + 1));
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->owner = strcpy(dog->owner, owner);
	}
	dog->age = age;
	return (dog);
}
