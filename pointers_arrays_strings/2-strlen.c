#include "main.h"
/**
 * _strlen - _strlen to calculate length of a string
 * Return: 0.
 * @s: pointer
 */
int _strlen(char *s)
{
int i, j = 0;

for (i = 0; s[i] != '\0'; i++)
{
j++;
}
return (i);
}
