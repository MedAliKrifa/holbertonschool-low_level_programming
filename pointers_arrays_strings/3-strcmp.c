#include "main.h"
/**
 * _strcmp - _strcmp to compare two strings
 * Return: 0.
 * @s1: pointer
 * @s2: pointer
 */
int _strcmp(char *s1, char *s2)
{
int i, a1, a2;
for (i = 0;; i++)
{
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
a1 = s1[i];
a2 = s2[i];
if (a1 > a2)
return (15);
if (a2 > a1)
return (-15);
}
}
