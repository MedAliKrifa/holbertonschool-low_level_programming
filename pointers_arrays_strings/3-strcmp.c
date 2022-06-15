#include "main.h"
/**
 * _strcmp - _strcmp to compare two strings
 * Return: 0.
 * @s1: pointer
 * @s2: pointer
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0;; i++)
{
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
}
