#include "main.h"
int _strlen(char *s);
/**
 * puts2 - puts2 to print a quote in reverse
 * Return: 0.
 * @s: pointer
 */
void puts2(char *str)
{
int i, length;
char s[32] = "";
length = _strlen(str);
for (i = 0; i < length; i += 2)
_putchar(str[i]);
str[i / 2] = s[i];
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
