#include "main.h"
/**
 * _strchr - _strchr to copy a memory area
 * Return: value of s.
 * @s: pointer
 * @c: char
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
s++;
}
if (s[i] == c && s[i] == 0)
{
return (s);
}
return ('\0');
}
