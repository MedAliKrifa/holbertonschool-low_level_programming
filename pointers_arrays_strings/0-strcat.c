#include "main.h"
/**
 * _strcat - _strcat to show if character is uppercase
 * Return: 0.
 * @dest: pointer
 * @src: pointer
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; src[i] != '\0'; i++)
{
}
for (j = 0; dest[j] != '\0'; j++)
{
src[i] = dest[j];
}
src[i] = '\0';
printf("%s", src);
return (0);
}
