#include "main.h"
#include <string.h>
/**
 * print_rev - print_rev to print a quote in reverse
 * Return: 0.
 * @s: pointer
 */
void print_rev(char *s)
{
int i, length, x;
length = strlen(s);
for (i = 0; i < length / 2; i++)
{
x = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = x;
}
printf("%s", s);
}
