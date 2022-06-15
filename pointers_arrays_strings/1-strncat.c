#include "main.h"
int _strlen(char *s);
/**
 * _strncat - _strncat to concatenate two string from an int n
 * Return: 0.
 * @dest: pointer
 * @src: pointer
 * @n: integer
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int length = _strlen(dest);
if (n > length)
n = length;
for (i = 0; i < n; i++)
{
dest[length + i] = src[i];
}
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
