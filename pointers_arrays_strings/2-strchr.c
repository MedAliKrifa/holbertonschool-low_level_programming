#include "main.h"
/**
 * _strchr - _strchr to copy a memory area
 * Return: value of s.
 * @s: pointer
 * @c: char
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
