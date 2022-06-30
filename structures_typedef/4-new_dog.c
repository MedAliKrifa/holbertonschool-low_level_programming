#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
int __strlen(char *s);
char *__strcpy(char *dest, char *src);
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
			ndog->name = malloc(sizeof(_strlen(name) + 1));
			if (ndog->name == NULL)
			{
				free(ndog);
				return (NULL);
			}
			ndog->name = _strcpy(ndog->name, name);
	}
	if (owner == NULL)
		ndog->owner = NULL;

	else
	{
			ndog->owner = malloc(sizeof(_strlen(owner) + 1));
			if (ndog->owner == NULL)
			{
				free(ndog->name);
				free(ndog);
				return (NULL);
			}
			ndog->owner = _strcpy(ndog->owner, owner);
		}
	ndog->age = age;
	return (ndog);
}
/**
 * _strlen - gets len of str
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * __strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
