#include "main.h"
/**
 * _strcpy - _strcpy to copy a string
 * Return: 0.
 * @dest: pointer
 * @src: pinter
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
printf("\n");
return 0;
}
