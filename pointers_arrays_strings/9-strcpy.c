#include "main.h"
/**
 * _puts - _puts to print a quote
 * Return: 0.
 * @str: pointer
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; ++i)
{
dest[i] = src[i];
}

dest[i] = '\0';
printf("%s", dest);
return 0;
}
