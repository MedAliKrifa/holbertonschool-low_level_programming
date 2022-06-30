#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * free_dog - free_dog to free all dog infos
 * @d: pointer
 * Return: 0
 */
void free_dog(dog_t *d)
{
    free(d->name);
    free(d->owner);
    free(d);
}