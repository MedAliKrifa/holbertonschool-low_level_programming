#include "main.h"
int _strlen(char *s);
/**
 * _strcat - _strcat to show if character is uppercase
 * Return: 0.
 * @dest: pointer
 * @src: pointer
 */
char *_strcat(char *dest, char *src)
{
int i;
int length = _strlen(dest);
for (i = 0; src[i] != 0; i++)
{
dest[length] = src[i];
length++;
}
dest[length] = '\0';
return (dest);
}

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
