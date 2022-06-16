#include "main.h"
/**
 * _memcpy - _memcpy to copy a memory area
 * Return: value of s.
 * @dest: pointer
 * @src: pointer
 * @n: integer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
