#include "main.h"
/**
 * _strncpy - _strncpy to copy a string from n (int)
 * Return: value of dest.
 * @dest: pointer
 * @src: pointer
 * @n: integer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
