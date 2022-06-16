#include "main.h"
/**
 * _strspn - _strspn to copy a memory area
 * Return: value of s.
 * @s: pointer
 * @accept: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;
while (*(s + i))
{
j = 0;
while (*(accept + j))
{
if (*(s + i) == *(accept + j))
{
break;
}
j++;
}
if (!*(accept + j))
{
return i;
}
i++;
}
return i;
}
