#include "main.h"
/**
 * _strcpy - _strcpy to copy a string
 * Return: 0.
 * @dest: pointer
 * @src: pinter
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (i = 0; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
