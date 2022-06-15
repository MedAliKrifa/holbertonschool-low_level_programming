#include "main.h"
int _strlen(char *s);
/**
 * rev_string - rev_string to print a string in reverse
 * Return: 0.
 * @s: pointer
 */
void rev_string(char *s)
{
int i, length;
length = _strlen(s);
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
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
