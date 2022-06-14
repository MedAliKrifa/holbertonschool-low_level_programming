#include "main.h"
int _strlen(char *s);
/**
 * puts_half - puts_half to print half string
 * Return: 0.
 * @str: pointer
 */
void puts_half(char *str)
{
int i, length;
length = _strlen(str);
if (length % 2 == 0)
{
for (i = length / 2; i < length; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (length - 1) / 2; i < length - 1; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
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
