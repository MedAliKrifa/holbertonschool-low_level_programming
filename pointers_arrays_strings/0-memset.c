#include "main.h"
/**
 * _memset - _memset to fill a memory with constant bytes
 * Return: value of s.
 * @s: pointer
 * @b: char
 * @n: integer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
